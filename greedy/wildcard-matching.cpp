class Solution {
public:
    bool fun(int i,int j,string&s,string&t, vector<vector<int>>&dp){
        if(i==0 && j==0) return true;
        if(i>0 && j==0) return false;
        if(i==0 && j>0){
            for(int k=0;k<j;k++) if(t[k]!='*') return false;
            return true;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i-1]==t[j-1] || t[j-1]=='?') return dp[i][j]=fun(i-1,j-1,s,t,dp);
        if(t[j-1]=='*'){
            return dp[i][j]=fun(i-1,j,s,t,dp) || fun(i,j-1,s,t,dp);
        }
        return dp[i][j]=false;
    }
    bool isMatch(string s, string t) {
        int n=s.size(),m=t.size();
        vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
        dp[0][0]=true;
        for(int i=1;i<=n;i++) dp[i][0]=false;
        for(int j=1;j<=m;j++){
            bool flag=true;
            for(int k=0;k<j;k++){
                if(t[k]!='*'){
                    flag=false; break;
                }
            }
            dp[0][j]=flag;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1] || t[j-1]=='?')  dp[i][j]=dp[i-1][j-1];
                else if(t[j-1]=='*'){
                     dp[i][j]=dp[i-1][j] || dp[i][j-1];
                }
                else dp[i][j]=false;
            }
        }
        return dp[n][m];
    }
};