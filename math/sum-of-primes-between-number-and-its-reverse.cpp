class Solution {
public:
    int sumOfPrimesInRange(int n) {
     string s = to_string(n);
     reverse(s.begin(),s.end());
     int r=stoi(s);

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