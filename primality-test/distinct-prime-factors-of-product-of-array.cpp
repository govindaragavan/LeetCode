class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> map;
        for(int x : nums) solve(x,map);
        return map.size();
    }
    private:
    void solve(long long n, unordered_set<int> &map){
          for(int i=2;i*i<=n;i++){
            while(n%i==0){
                map.insert(i);
                n/=i;
            }
          }
          if(n>1) map.insert(n);
    }
};