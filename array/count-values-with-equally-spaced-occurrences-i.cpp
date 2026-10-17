class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> map;
        for(int x : nums) map[x]++;
        unordered_map<int,pair<int,int>> map2;
        for(int i=1;i<n;i++){
            if(map2[nums[i]].first==0 && nums[i]!=nums[0])
            map2[nums[i]].first=i;
        }
        for(int i=n-1;i>=0;i--){
            if(map2[nums[i]].second==0)
            map2[nums[i]].second=i;
        }
        int ans=0;
        for(auto it = map2.begin();it!=map2.end();it++){
            auto tmp= it->second;
            int val=it->first;
            if(map[val]==3){
                if((tmp.first+tmp.second)%2==0 && nums[(tmp.first+tmp.second)/2]==val)
                ans++;
            }
// cout<<it->first<<" "<<tmp.first<<" "<<tmp.second<<endl;
        }
        return ans;
    }
};