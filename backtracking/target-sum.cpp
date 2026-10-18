class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
     int n=nums.size();
     int sum=0;

     for(int x : nums) sum+=x;
    if((sum-target)%2==1 || abs(target)>sum) return 0;
     target=(sum-target)/2;
     vector<vector<int>>dp(n,vector<int>(target+1,0));
     for (int i = 0; i < n; i++)
    dp[i][0] = 1;

if (nums[0] == 0)
    dp[0][0] = 2;
else if (nums[0] <= target)
    dp[0][nums[0]] = 1;
     for(int i=1;i<n;i++){
        for(int T=0;T<=target;T++){
            int notTake=dp[i-1][T];
            int Take=0;
            if(nums[i]<=T) Take=dp[i-1][T-nums[i]];

            dp[i][T]= Take + notTake;
        }
     }
    //  dp[0][target+nums[0]]=1;
    //  dp[0][target-nums[0]]=1;
    //  for(int i=1;i<n;i++){
    //     for(int cur=0;cur<=sum;cur++){
    //         int plus=dp[i-1][cur+nums[i]];
    //         int minus=dp[i-1][cur-nums[i]];

    //         dp[i][cur]=plus+minus;
    //     }
    //  }
    //  return dp[n-1][target];
        return dp[n-1][target];
    }
    int solve(int n,int target,vector<int> nums){
        if(n==0){
            if(target==0 && nums[0]==0) return 2;
            if(target==0 || nums[0]==target) return 1;
            return 0;
        }
        int notTake=solve(n-1,target,nums);
        int Take=0;
        if(nums[n]<=target)Take=solve(n-1,target-nums[n],nums);

        return notTake + Take;
    }
};