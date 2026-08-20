class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0,r=0;
        double sum=0;
        double ans=-1e18;
        while(l<=r && r<nums.size()){
                        sum+=nums[r];
                while(r-l+1>k){
                sum-=nums[l];
                l++;
            }
         if (r - l + 1 == k) 
        ans = max(ans, sum / k);
            r++;
        }
        return ans;
    }
};