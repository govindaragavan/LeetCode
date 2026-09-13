class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> v;
        int prev=0;
        int j=left;
        for( j=left;j<=right;j++){
            if(isPrime(j)) {
                prev=j;
                break;
            }
        }
        vector<int> ans;
        int diff=INT_MAX;
        for(int i=j+1;i<=right;i++){
            if(isPrime(i)) {
              if(i-prev<diff){
                diff=i-prev;
                ans={prev,i};
                prev=i;
              }
            }
        }
        if(prev==j) return {-1,-1};
        return ans;
    }
    private:
    bool isPrime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i<=sqrt(n);i+=2){
      if(n%i==0) return false;
        }
        return true;
    }
};