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
        int size=0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                size++;
                if(i!=n/i) size++;
            }
            if(size>1) return 0;
            
        }
        if(size==1) return 1;
        return 0;
    }
};