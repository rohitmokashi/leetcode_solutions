#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
    static vector<int> twoSum(vector<int>& nums, int target){
        int l=nums.size();

        for (int i=0; i<l; i++){
            for (int j=i+1; j<l; j++){
                if (nums[i]+nums[j] == target){
                    return {i, j};
                }
            }
        }
    }
};

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = Solution::twoSum(nums, target);
    
    printf("[%d , %d]", ans[0], ans[1]);

    return 0;
}