class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        if(n==1){
            if(amount%coins[0]==0) return amount/coins[0];
            else return -1;
        }
        vector<vector<int>> dp(n,vector<int>(amount+1,INT_MAX));
        //BASE CASE
        for(int T=0;T<amount+1;T++) {
          if(T%coins[0]==0)  dp[0][T]=T/coins[0];
          else dp[0][T]=1e9;
        }
        // NESTED LOOP
        for(int i=1;i<n;i++){
            for(int T=0;T<amount+1;T++){
                int notTake=dp[i-1][T];
                int Take=INT_MAX;
                if(coins[i]<=T) Take=1+dp[i][T-coins[i]];
                dp[i][T]=min(Take,notTake);
            }
        }
        return dp[n-1][amount]==1e9? -1 : dp[n-1][amount];
    }
};