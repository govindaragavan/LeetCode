class Solution {
public:
      int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        dp[0][0]=grid[0][0];

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) continue;
                else{
                    int right=INT_MAX,down=INT_MAX;
                    if(j>0) right=dp[i][j-1];
                    if(i>0) down=dp[i-1][j];
                    dp[i][j]=grid[i][j] + min(right,down);
                }
            }
        }
        return dp[m-1][n-1];
    }
   // TABULATION

//     int minPathSum(vector<vector<int>>& grid) {
//         int m=grid.size();
//         int n=grid[0].size();
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         return solve(m-1,n-1,grid,dp);
//     }
//     int solve(int m,int n,vector<vector<int>> grid,vector<vector<int>> dp){
//         if(m==0 && n==0) return grid[0][0];

//         if(m<0 || n<0) return INT_MAX;
//   if(dp[m][n]!=-1) return dp[m][n];
//         int up=solve(m-1,n,grid,dp);
//         int left=solve(m,n-1,grid,dp);

//         return dp[m][n]=grid[m][n]+ min(up,left);
//     }
};