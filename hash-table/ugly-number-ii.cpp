class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<6) return n;
        vector<int> v;
        v={1,2,3,4,5};
        int i=6;
        while(v.size()!=n){
          if(isPrime(i)) v.push_back(i);
          i++;
        }
        for(int x : v) cout<<x<<" ";
        return v[n-1];
    }
    private:
    bool isPrime(int n){
    while(n!=0 && n%2==0){
        n/=2;
        if(n==1) return 1;
    }
    while(n!=0 && n%3==0){
        n/=3;
        if(n==1) return 1;
    }
    while(n!=0 && n%5==0){
        n/=5;
        if(n==1) return 1;
    }
    if(n==1) return true;
    return false;
    }
};