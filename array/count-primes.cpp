class Solution {
public:
    int countPrimes(int n) {
        map<int,int> map;
        for(int i=0;i*i<=n;i++){
            if(n%x==0)
            map[x]++;

            n/=x;
        }
        if(n>1) map[n]++;
        for(auto it=map.begin();it!=map.end();it++) cout<<it->first<<" "<<it->second;
        return 1;
    }
};