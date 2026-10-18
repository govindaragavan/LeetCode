class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
       vector<vector<int>> dp(n,vector<int>(amount+1,0));

       //BASE CASE
      for(int T=0;T<amount+1;T++)
      if(T%coins[0]==0) dp[0][T]=1;


      // NESTED LOOPS
      for(int i=1;i<n;i++){
        for(int T=0;T<amount+1;T++){
            int notTake=dp[i-1][T];
            int Take=0;
            if(coins[i]<=T) Take=dp[i][T-coins[i]];
            long long tmp=(long long)notTake +(long long)Take;
            if(tmp>INT_MAX) dp[i][T]=-1;
            else dp[i][T]=tmp;
            // dp[i][T]= (notTake + Take)>INT_MAX? -1:notTake+Take;
        }
      }
      return dp[n-1][amount];
    }
    int solve(int i,int amount,vector<int> coins){
        if(i==0){
            if(amount%coins[0]==0) return 1;
            return 0;
        }

        int notTake=solve(i-1,amount,coins);
        int Take=0;
        if(coins[i]<=amount) Take=solve(i,amount-coins[i],coins);

        return Take + notTake;
    }
};