class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        set<pair<int,int>> dp;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i]-k)!=mp.end()){
                if(dp.find({nums[i]-k,nums[i]})==dp.end())
            dp.insert({nums[i],nums[i]-k});
            }
            if(mp.find(nums[i]+k)!=mp.end()){
                if(dp.find({nums[i]+k,nums[i]})==dp.end())
            dp.insert({nums[i],nums[i]+k});}
            mp[nums[i]]=i;
        }
        return dp.size();
    }
};