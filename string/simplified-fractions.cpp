class Solution {
    void solve(vector<vector<int>> &ans,int i,vector<int> curr,int n){
        if(i==n+2) return;
        if(curr.size()==2) {ans.push_back(curr); return;}
       curr.push_back(i);
       solve(ans,i+1,curr,n);
       curr.pop_back();
       solve(ans,i+1,curr,n);
    }
public:
    vector<string> simplifiedFractions(int n) {
    vector<string> v;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(__gcd(i,j)==1){
            string s=to_string(i)+"/"+to_string(j);
            v.push_back(s);}
        }
    }
    return v;
    }
};