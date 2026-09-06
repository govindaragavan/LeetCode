class Solution {
public:
    int countPrimes(int n) {
              if (n <= 2) return 0;
        vector<int> a(n, 1);
        a[0] = a[1] = 0;

      for(int i=2;i*i<n;i++){
        if(a[i]==1){
            for(int j=i*i;j<n;j+=i){
                a[j]=0;
            }
        }
      }
      int ans=0;
      for(int i=2;i<n;i++) if(a[i]) ans++;
        return ans;
    }
};