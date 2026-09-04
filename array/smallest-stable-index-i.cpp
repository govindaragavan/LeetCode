class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> nextmin(n);
       nextmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
          nextmin[i]=min(nums[i],nextmin[i+1]);
        }
        for(int x : nextmin) cout<<x<<" ";
        int Max=INT_MIN;
         for(int i=0;i<n;i++){
          Max=max(Max,nums[i]);
          int nmin=nextmin[i];
          if(Max-nmin<=k) return i;
         }
        return -1;
    }
};