class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1,temp=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==temp)
            count++;
            if(count>nums.size()/2 || count>(nums.size()+1)/2)
            return nums[i];
            else if(nums[i]!=temp)
            temp=nums[i];
        }
        return nums[0];
    }
};