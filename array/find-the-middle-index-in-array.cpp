class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        
        nums.insert(nums.begin(),0);
      for(int i=1;i<n;i++){
        if(nums[i-1]==nums[n-1]-nums[i])
        return i;
       if(i==n-1 && nums[i-1]==0)
       return i;
      }
      return 0;
    }
};