class Solution {
public:
int kadane(vector<int>& nums){
    int res=nums[0],maxend=nums[0];
        for(int i=1;i<nums.size();i++){
           maxend=max(maxend+nums[i],nums[i]);
           res=max(maxend,res);
        }
        return res;
}
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int sum=0;
        int max_normal=kadane(nums);
        if(max_normal<0)
        return max_normal;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            nums[i]=-nums[i];
            }
            int max_circular=sum+kadane(nums);
            return max(max_normal,max_circular);
    }
    
};