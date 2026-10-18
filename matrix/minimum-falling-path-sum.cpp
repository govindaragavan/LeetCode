class Solution {
public:


  //  TABULATION
       int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-101));
        for(int i=0;i<n;i++) dp[0][i]=matrix[0][i];
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                int up=INT_MAX,left=INT_MAX,right=INT_MAX;
                if(j==0){
                 up=dp[i-1][j];
                 right=dp[i-1][j+1];
                }
                else if(j==n-1){
               up=dp[i-1][j];
               left=dp[i-1][j-1];
                }
                else{
                    up=dp[i-1][j];
               left=dp[i-1][j-1];
                                right=dp[i-1][j+1]; 
                }
                dp[i][j]=matrix[i][j]+min(min(up,left),right);
            }
        }
        int ans=*min_element(dp[n-1].begin(),dp[n-1].end());
        return ans;
    }
// //      MEMOIZATION
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int ans=INT_MAX;
//         vector<vector<int>> dp(m,vector<int> (n,-101));
//         for(int i=0;i<n;i++) ans=min(ans,solve(m-1,i,matrix,dp));

//         return ans;
//     }
//     int solve(int r,int i,vector<vector<int>> matrix,vector<vector<int>> dp){
//         if(r==0) return matrix[0][i];
//         if(r<0 || i<0) return INT_MAX;
//  if(dp[r][i]!=-101) return dp[r][i];
//     int up=INT_MAX,left=INT_MAX,right=INT_MAX;
//     if(i==matrix[0].size()-1){
//         up=solve(r-1,i,matrix,dp);
//         left=solve(r-1,i-1,matrix,dp);
//     }
//    else if(i==0){
//         up=solve(r-1,i,matrix,dp);
//         right=solve(r-1,i+1,matrix,dp);
//     }
//    else{
//     up=solve(r-1,i,matrix,dp);
//     right=solve(r-1,i+1,matrix,dp);
//     left=solve(r-1,i-1,matrix,dp);
//    }
//    return dp[r][i]= matrix[r][i] + min(min(up,left),right);
//     }
};