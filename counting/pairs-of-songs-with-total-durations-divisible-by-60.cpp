class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        for(int i=0;i<time.size();i++)
        time[i]=time[i]%60;
        unordered_map<int,int>a;
        for(int i=0;i<time.size();i++){
            int need=(60-time[i])%60;
        if(a.find(need)!=a.end())
        count+=a[need];
        a[time[i]]++;
        }
        return count;

    }
};