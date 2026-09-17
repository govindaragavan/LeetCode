class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int ans=r-l+1;
        for(long long i=l;i<=r;i++)
     if(solve(i)) ans--;
        
        return ans;
    }
    bool solve(long long n){
        long long root=(int)sqrt(n);
        if(root*root==n) {
            if(root==2) return 1;
            if(root==1) return 0;
            if(root%2!=0 && isPrime(root)) return 1;
        }
        return 0;
    }
    bool isPrime(int n){
        for(int i=3;i<=sqrt(n);i++)
        if(n%i==0) return 0;
        return 1;
    }
};