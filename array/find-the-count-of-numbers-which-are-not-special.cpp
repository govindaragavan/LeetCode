class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int ans=0;
        for(int i=l;i<=r;i++){
     if(solve(i)) ans++;
        }
        return r-l+1-ans;
    }
    bool solve(int n){
        vector<int> ans;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ans.push_back(i);
                if(i!=n/i) ans.push_back(n/i);
            }
        }
        if(ans.size()-1==2) return 1;
        return 0;
    }
};