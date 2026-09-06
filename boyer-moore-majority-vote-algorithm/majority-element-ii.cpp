class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majority=floor((double)n/3);
        unordered_map<int,int> map;
        for(int x : nums){
         map[x]++;
         
         }
 vector<int> ans;
        for(auto it=map.begin();it!=map.end();it++){
            if(it->second>majority) ans.push_back(it->first);
        }
        return ans;
    }
};