class Solution {
public:
    int smallestValue(int n) {
        while(n!=SumPrime(n)){
            n=SumPrime(n);
        }
        return n;
    }
    private: 
    int SumPrime(int n){
        long long sum=0;
        for(int i=2;i*i<=n;i++){
            while(n%i==0){
       sum+=i;
       n/=i;
            }
        }
        if(n>1) sum+=n;

        return sum;
    }
};