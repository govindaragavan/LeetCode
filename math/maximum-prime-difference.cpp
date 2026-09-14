class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int n=nums.size();
        int low=-1,high=-1;
        for(int i=0;i<n;i++){
        if(isPrime(nums[i])) {low=i; break;}
        }
        for(int i=n-1;i>=0;i--){
        if(isPrime(nums[i])) {high=i; break;}
        }
        if(low!=-1 && high!=-1) return abs(high-low);

        return 0;
    }
    bool isPrime(int n){
        if(n<=1) return 0;
        if(n==2) return 1;
        if(n%2==0) return 0;

        for(int i=3;i<=sqrt(n);i++)
            if(n%i==0) return 0;

            return 1;
    }
};