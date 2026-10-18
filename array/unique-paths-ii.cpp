class Solution {
public:
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]==1 || obstacleGrid[0][0]==1 ) return 0;
        vector<vector<int>> dp(m,vector<int>(n,-1));
       dp[0][0]=1;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0) continue;
            else{
                int down=0,right=0;
                if(i>0 && obstacleGrid[i][j]!=1) down=dp[i-1][j];
                if(j>0 && obstacleGrid[i][j]!=1) right=dp[i][j-1];
               dp[i][j]=down+right;
            }
        }
       }
       return dp[m-1][n-1];
    }
      // MEMOIZATION
    // int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    //     int m=obstacleGrid.size();
    //     int n=obstacleGrid[0].size();
    //     if(obstacleGrid[m-1][n-1]==1) return 0;
    //     vector<vector<int>> dp(m,vector<int>(n,-1));
    //     return solve(m-1,n-1,obstacleGrid,dp);
    // }
    // int solve(int m,int n, vector<vector<int>> obstacleGrid,vector<vector<int>> dp){
    //     if(m==0 && n==0) return 1;

    //     if(m<0 || n<0) return 0;
    //    if(dp[m][n]!=-1) return dp[m][n];
    //    int up=0,left=0;
    //    if(m>0 && obstacleGrid[m-1][n]==0) up =solve(m-1,n,obstacleGrid,dp);
    //    if(n>0 && obstacleGrid[m][n-1]==0) left=solve(m,n-1,obstacleGrid,dp);

    //    return dp[m][n]=left + up;

    // }
    //RECURSION
    // int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    //     int m=obstacleGrid.size();
    //     int n=obstacleGrid[0].size();
    //     if(obstacleGrid[m-1][n-1]==1) return 0;
    //     return solve(m-1,n-1,obstacleGrid);
    // }
    // int solve(int m,int n, vector<vector<int>> obstacleGrid){
    //     if(m==0 && n==0) return 1;

    //     if(m<0 || n<0) return 0;
       
    //    int up=0,left=0;
    //    if(m>0 && obstacleGrid[m-1][n]==0) up =solve(m-1,n,obstacleGrid);
    //    if(n>0 && obstacleGrid[m][n-1]==0) left=solve(m,n-1,obstacleGrid);

    //    return left + up;

    // }
};