class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        long long sum1=0;
        for(int i=0;i<n;i+=2)
            sum1+=nums[i];
            long long sum2=0;
            for(int i=1;i<n;i+=2)
            sum2+=nums[i];
        return max(sum1,sum2);
    }
};