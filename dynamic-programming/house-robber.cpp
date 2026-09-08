class Solution {
    int solve(vector<int> nums,int i){
        if (i >= nums.size())
            return 0;

        int rob = nums[i] + solve(nums, i + 2);
        int skip = solve(nums, i + 1);

        return  max(rob, skip);
    }
public:
    int rob(vector<int>& nums) {
int ans=solve(nums,0);
return ans;
    }
};