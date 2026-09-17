class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int tmp=n;
        int r=0;
    while(tmp>0){
        int rem=tmp%10;
         r=r*10+rem;
         tmp/=10;
    } 
     int left=min(n,r);
     int right=max(n,r);
     int ans=0;
     for(int i=left;i<=right;i++){
        if(isPrime(i)) ans+=i;
     }

     return ans;
    }

    bool isPrime(int n){
        if(n<=1) return 0;
        if(n==2) return 1;
        if(n%2==0) return 0;
        for(int i=3;i*i<=n;i++)
        if(n%i==0) return 0;

        return 1;
    }
};