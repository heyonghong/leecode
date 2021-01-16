
// leetcode common library
#include<iostream>
#include<vector>
#include<map>
#include <unordered_map>
using namespace std;

/********************************************************************************** 
* 
* Given an array of integers, find two numbers such that they add up to a specific target number.
* 
* The function twoSum should return indices of the two numbers such that they add up to the target, 
* where index1 must be less than index2. Please note that your returned answers (both index1 and index2) 
* are not zero-based.
* 
* You may assume that each input would have exactly one solution.
* 
* Input: numbers={2, 7, 11, 15}, target=9
* Output: index1=1, index2=2
* 
*               
**********************************************************************************/
class Solution {
public:
/*     vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (size_t i = 0; i < nums.size()-1; i++)
        {
            for (size_t j = i+1; j < nums.size(); j++)
            {
                if (nums[i]+nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    } */
/*         vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for(int i=0; i < numbers.size(); i++){
            // not found the second one
            if (m.find(numbers[i])==m.end() ) { 
                // store the first one poisition into the second one's key
                m[target - numbers[i]] = i; 
            }else { 
                // found the second one
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
                break;
            }
        }
        return result;
    } */
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for (int i=0; i<nums.size(); i++) {
            if ( m.find(target - nums[i]) == m.end() ) {
                m[nums[i]] = i;
            }else{
                result.push_back(m[target - nums[i]]+1);
                result.push_back(i+1);
            }
        }
        return result;
    }    
};
int main(){
    int b[] = {2,5,5,9};
    vector<int>a(b,b+4);
    int target = 10;
    Solution A;
    vector<int> result = A.twoSum(a,target);
    for (size_t i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}