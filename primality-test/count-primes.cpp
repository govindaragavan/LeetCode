class Solution {
public:
    int countPrimes(int n) {
              if (n <= 2) return 0;
        vector<bool> a(n, true);
        a[0] = a[1] = false;
  for(int i=4;i<n;i+=2) a[i]=false;
      for(int i=3;i*i<n;i+=2){
        if(a[i]){
            for(int j=i*i;j<n;j+=2*i){
                a[j]=false;
            }
        }
      }
      int ans=1;
      for(int i=3;i<n;i+=2) if(a[i]) ans++;
        return ans;
    }
};