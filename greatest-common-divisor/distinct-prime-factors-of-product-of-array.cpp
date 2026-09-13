class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        long long product=1;
        for(int x : nums) product*=x;
        int ans=solve(product);
        return ans;
    }
    private:
    int solve(long long n){
       unordered_map<int,int> map;
          for(int i=2;i*i<=n;i++){
            while(n%i==0){
                map[i]++;
                n/=i;
            }
          }
          if(n>1) map[n]++;
          return map.size();
    }
};