class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0;

        for(int i=1;i<=amount;i++){
           for(int x : coins)
           if(i>=x && dp[i-x]!=INT_MAX)
           dp[i]=min(dp[i],1+dp[i-x]);
        }
        if(dp[amount]==INT_MAX) return -1;
  return dp[amount];
    }
};