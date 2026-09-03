class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++) x=x^nums[i];

        int rightmost=x&-x;
        int b2=0,b1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&rightmost)
            b1=b1^nums[i];
            else
            b2=b2^nums[i];
        }
        return {b1,b2};
    }
};