class Solution {
public:
    int largestPrime(int n) {
        long long sum=0;
        if(n==2) return n;
        for(int i=2;i<=n;i++){
            if(isPrime(i)){
                if(i+sum>n) return sum;
                else sum+=i;
            }
        }
        return 0;
    }
    private:
    bool isPrime(int n){
        if(n<=1) return false;
        if(n==2) return 1;
        if(n%2==0) return 0;

        for(int i=3;i<=sqrt(n);i+=2){
            if(n%i==0) return false;
        }
        return 1;
    }
};