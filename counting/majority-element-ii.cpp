class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majority=floor((double)n/3);
        unordered_map<int,int> map;
        set<int> set;
        for(int x : nums){
         map[x]++;
         if(map[x]>majority) set.insert(x);
         }
 vector<int> ans(set.begin(),set.end());
        return ans;
    }
};