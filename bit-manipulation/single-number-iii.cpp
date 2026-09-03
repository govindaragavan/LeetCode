class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++) ans=ans^nums[i];

        int rightmost=((ans&(ans-1))&ans);
        int b2=0,b1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&rightmost)
            b2=b2^nums[i];
            else
            b1=b1^nums[i];
        }
        return {b1,b2};
    }
};