class Solution {
public:
    int countGoodSubstrings(string s) {
        int l=0,r=0;
        int ans=0;
        while(l<=r && r<s.length()){
            while(r-l+1>3)
                l++;
        if(r-l+1==3){
            if(s[l]!=s[l+1] && s[l+1]!=s[l+2] && s[l]!=s[l+2])
            ans++;
        }
         r++;   
        }
        return ans;
    }
};