class Solution {
public:
    // TABULATION
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) continue;
                else {
                    int down=0,right=0;
              if(i>0)   down=dp[i-1][j];
              if(j>0)   right=dp[i][j-1];
                dp[i][j]=down+right;}
            }

        }
        return dp[m-1][n-1];
    }

        // MEMOIZATION
    // int uniquePaths(int m, int n) {
    //     vector<vector<int>> dp(n,vector<int>(m,-1));
    //     dp[0][0]=1;
    //     return solve(m-1,n-1,dp);
    // }
    // int solve(int m, int n,vector<vector<int>> dp) {
    //     if(m==0 && n==0) return 1;
    //     if(n< 0 || m< 0) return 0;
    //    if(dp[n][m]!=-1) return dp[n][m];
    //     int up = solve(m-1,n,dp);
    //     int left = solve(m,n-1,dp);

    //     return dp[n][m]=up + left;
    // }

       // RECURSION
    // int uniquePaths(int m, int n) {
    //     return solve(m-1,n-1);
    // }
    // int solve(int m, int n) {
    //     if(m==0 && n==0) return 1;
    //     if(n< 0 || m< 0) return 0;

    //     int up = solve(m-1,n);
    //     int left = solve(m,n-1);

    //     return up + left;
    // }

};