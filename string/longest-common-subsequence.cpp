class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        //STATE
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        //TABULATION

        //BASE CASE
        for(int i=0;i<n;i++) dp[i][0]=0;
        for(int j=0;j<m;j++) dp[0][j]=0;
  //NESTED LOOP
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m]==-1? 0 : dp[n][m];
    }
    int solve(int i1,int i2,string text1,string text2,vector<vector<int>> dp){
        if(i1==0 || i2==0) return 0;
     if(dp[i1][i2]!=-1) return dp[i1][i2];
        if(text1[i1-1]==text2[i2-1]) return dp[i1][i2]= 1+solve(i1-1,i2-1,text1,text2,dp);
        return dp[i1][i2]= max(solve(i1-1,i2,text1,text2,dp),solve(i1,i2-1,text1,text2,dp));
    }
};