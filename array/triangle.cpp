class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int r=triangle.size();
        vector<vector<int>> dp(r,vector<int>(r,INT_MIN));
        dp[0][0]=triangle[0][0];

        for(int i=0;i<r;i++){
            for(int j=0;j<i+1;j++){
                if(i==0 && j==0) continue;
                else{
                    int left=INT_MAX,right=INT_MAX;
                    if(j==0) right=dp[i-1][j];
                    else if(j==i) left=dp[i-1][j-1];
                    else{
                        left=dp[i-1][j-1];
                        right=dp[i-1][j];
                    }
                    dp[i][j]=triangle[i][j]+min(left,right);
                }
            }
        }
    int ans=*min_element(dp[r-1].begin(),dp[r-1].end());
    return ans;
     
    }
 // MEMOIZAION


//     int minimumTotal(vector<vector<int>>& triangle) {
//         int r=triangle.size();
//         int ans=INT_MAX;
//         vector<vector<int>> dp(r,vector<int>(r,INT_MIN));
//         for(auto  v : dp){
//      for(int x : v) cout<<x<<" ";
//      cout<<endl;
//         }
//         for(int i=0;i<r;i++) ans=min(ans,solve(r-1,i,triangle,dp));

//         return ans;
     
//     }
//     int solve(int r,int i,vector<vector<int>>triangle,vector<vector<int>>dp){

//      if(r==0) return triangle[0][0];

//  if(dp[r][i]!=INT_MIN) return dp[r][i];

//     int left=INT_MAX,right=INT_MAX;

//     if(i==r) left=solve(r-1,i-1,triangle,dp);

//     else if(i==0) right=solve(r-1,i,triangle,dp);

//     else{
//         left  = solve(r-1,i-1,triangle,dp);
//         right = solve(r-1,i,triangle,dp);
//     }
//     return dp[r][i]=triangle[r][i]+min(left,right);
//     }
};