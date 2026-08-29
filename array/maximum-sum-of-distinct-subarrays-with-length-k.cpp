class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
      unordered_map<int,int> mp;
        int l=0,r=k,ans=0,sum=0;
        for(int i=0;i<k;i++)
       sum+=nums[i];
            while(l<r && r<n){
                            ans=max(ans,sum);
            sum+=(nums[r]-nums[l]);
            mp[nums[r]]++;
        while(mp[nums[r]]>1 && r<n){
                mp[nums[l]]--;
                mp[nums[r]]++;
                sum+=(nums[r]-nums[l]); 
                r++;
          l++;  
        } 
        r++; 
        l++; 
        }
        return ans;
    }
};