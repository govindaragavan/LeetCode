class Solution {

public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long long> prefix(n);
long long sum=0;
for(int i=0;i<n;i++){
    sum+=nums[i];
    prefix[i]=sum;
}  
int ans=0; 
for(int i=0;i<n;i++){
    if(prefix[i]>=prefix[n-1]-prefix[i] && i!=n-1) ans++;
} 
return ans;
    }
};