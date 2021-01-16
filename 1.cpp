
// leecode common library
#include<iostream>
#include<vector>
using namespace std;

// 1
// 给定一个整数数组 nums 
// 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int tmp;
        for (size_t i = 0; i < nums.size()-1; i++)
        {
            for (size_t j = i+1; j < nums.size(); j++)
            {
                if (nums[i]+nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                    /* code */
                }
                
                /* code */
            }
            
            /* code */
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
        /* code */
    }
    return 0;
}