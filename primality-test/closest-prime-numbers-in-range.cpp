class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> v;
        for(int i=left;i*i<=right;i+=2){
            if(isPrime(i)) v.push_back(i);
        }
        for(int x : v) cout<<x<<" ";
        if(v.size()<2) return {-1,-1};
        int diff=v[1]-v[0];
        vector<int> ans={v[0],v[1]};
        for(int i=2;i<v.size();i++){
            if(v[i]-v[i-1]<diff){
                diff=v[i]-v[i-1];
                ans={v[i-1],v[i]};
            }
        }
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