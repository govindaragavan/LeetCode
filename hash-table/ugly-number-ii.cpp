class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<6) return n;
        vector<int> v;
        v={1,2,3,4,5};
        int i=6;
        while(v.size()!=n){
          if(!isPrime(i)) v.push_back(i);
          i++;
        }
        // for(int x : v) cout<<x<<" ";
        return v[n-1];
    }
    private:
    bool isPrime(int n){
    if(n%2==0) return 0;
    for(int i=3 ;i<=sqrt(n);i+=2)
      if(n%i==0) return false;

      return true;
    }
};