class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> map;
        for( int x : nums) map[x]++;
        unordered_map<int,vector<int>> map1;
        int n=nums.size();
        // second is for freq;
        // first is for prev index;
        // int first in map is for nums[i]

        for(int i=0;i<n;i++){
            map1[nums[i]].push_back(i);
        }
   int ans=0;
        for(auto it=map1.begin();it!=map1.end();it++){
            vector<int> tmp=it->second;
            int val=it->first;
            if(map[val]>=3){
                bool ok=true;
                int diff= tmp[1]-tmp[0];
                for(int i=2;i<tmp.size();i++){
                    if(tmp[i]-tmp[i-1]!=diff){
                    ok=false;
                    break;}
                }
                if(ok) ans++;
            }
        }
        return ans;
    }
};