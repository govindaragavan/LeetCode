class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int l=0,ans=0;
        for(int i=0;i<n;i++){
        mp[nums[i]]++;
        while(mp[0]>1){
            mp[nums[l]]--;
            l++;
        }
        ans=max(ans,i-l+1);
        }
        return ans-1;
    }
};