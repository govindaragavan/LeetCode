class Solution {
public:
    bool search(vector<int>& nums, int target) {
      int l=0,h=nums.size()-1;
      while(l<=h){
        int m=(h-l)/2+l;
        if(nums[m]==target)
        return true;
        if(nums[l] == nums[m] && nums[m] == nums[h]){
                l++;
                h--;
            }
        else if(nums[l]<=nums[m]){
            if(target<nums[m] && nums[l]<=target)
            h=m-1;
            else
            l=m+1;
        }
        else{if(target>nums[m] && nums[h]>=target)
            l=m+1;
            else
            h=m-1;}
      }
      return false;
    }
};