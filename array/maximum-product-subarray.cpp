class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currmax=nums[0],currmin=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)
            swap(currmin,currmax);


            currmax=max(nums[i],currmax*nums[i]);
            currmin=min(nums[i],currmin*nums[i]);

            res=max(res,currmax);
        }
        return res;
    }
};