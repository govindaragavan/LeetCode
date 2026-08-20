class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            len++;
            else
            len=0;
            res=max(len,res);
        }
        return res;
    }
};