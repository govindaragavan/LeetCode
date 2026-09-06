class Solution {
public:
    int countPrimes(int n) {
        map<int,int> map;
        if(n<=3) return 0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
            map[i]++;

            n/=i;
        }
        if(n>1) map[n]++;
        int ans=1;
        for(auto it=map.begin();it!=map.end();it++) ans*=(it->second+1);
        return ans;
    }
};