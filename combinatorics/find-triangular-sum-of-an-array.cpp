class Solution {
    void solve(vector<int>& nums,int n){
        if(n==1) return;

        vector<int> newNums(n-1);

        for(int i=0;i<n-1;i++)
         newNums[i]=(nums[i]+nums[i+1])%10;

        nums=newNums;

        solve(nums,n-1);
    }
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        solve(nums,n);
        return nums[0];

    }
};