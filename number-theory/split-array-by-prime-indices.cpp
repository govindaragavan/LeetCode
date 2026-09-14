class Solution {
public:
    long long splitArray(vector<int>& nums) {
        long long sum=0;
        for(int x : nums) sum+=x;
    long long Primesum=0;
        for(int x : nums) 
        if(isPrime(x)) Primesum+=x;

        cout<<sum<<" "<<Primesum;
    return abs((2*Primesum)-sum);
        
    }

    bool isPrime(int n){
        if(n<2) return  0;
                if(n==2) return 1;

        if(n%2==0) return 0;
        for(int i=3;i<=sqrt(n);i++)
        if(n%i==0) return 0;

        return 1;
    }
};