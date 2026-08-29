class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
      unordered_map<int,int> mp;
        int l=0,r=0;
        long long ans=0,sum=0;
        while(l<=r && r<n){
            sum+=nums[r];

        mp[nums[r]]++;
         while(mp[nums[r]]>1 && r<n){
                mp[nums[l]]--;
                sum-=nums[l]; 
                l++;  
        } 
                
            if(r-l+1==k){ 
        ans=max(ans,sum); 
        mp[nums[l]]--;
        sum-=nums[l];      
        l++; 
          }
            r++; 

        }
        return ans;
    }
};