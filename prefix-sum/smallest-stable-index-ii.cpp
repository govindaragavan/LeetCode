class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>nmin(n);
        int Min=INT_MAX;
        for(int i=n-1;i>=0;i--){
           Min=min(Min,nums[i]);
           nmin[i]=Min;
        }
        int Max=INT_MIN;
        for(int i=0;i<n;i++){
            Max=max(Max,nums[i]);
            if(Max-nmin[i]<=k) return i;
        }
        return -1;

    }
};