class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int x : nums) sum+=x;
        if(sum%2==1) return 0;
        vector<vector<int>> dp(n,vector<int> (sum/2 + 1 ,0));
        for(int i=0;i<n;i++) dp[i][0]=1;
      if(nums[0]<=sum/2)  dp[0][nums[0]] = 1;

        for(int i=1;i<n;i++){
            for(int j=1;j<sum/2 +1;j++){
            int notPick=dp[i-1][j];
            int Pick=0;
            if(j>=nums[i]) Pick=dp[i-1][j-nums[i]];
            dp[i][j]=Pick|notPick;
            }
        }
        return dp[n-1][sum/2];
    }
    // int solve(int i,int target,vector<int> nums,vector<vector<int>>&dp){
    //     if(target==0) return 1;
    //     if(i==0) return nums[0]==target;
    //   if(dp[i][target]!=-1) return dp[i][target];
    //     int notPick= solve(i-1,target,nums,dp);
    //     int Pick=0;
    //     if(target>=nums[i]) Pick=solve(i-1,target-nums[i],nums,dp);

    //     return dp[i][target]= notPick|Pick;
    // }
};