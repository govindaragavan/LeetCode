class Solution {
public:
    string reverseStr(string s, int k) {
   int l=0,r=2*k-1;
int n=s.length();
        while(l<n){
           reverse(s.begin() + l, s.begin() + min(l + k, n));            
            l+=(2*k);
            r=min(r-l+1,n-1);
        }
        return s;
    }
};