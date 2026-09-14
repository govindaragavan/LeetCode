class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n=nums.size();
        long long OtherSum=0;
    long long PrimeSum=0;
        for(int x=0;x<n;x++){ 
        if(isPrime(x)) PrimeSum+=nums[x];
        else OtherSum+=nums[x];}

    return abs(PrimeSum-OtherSum);
        
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