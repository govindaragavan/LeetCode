class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        a[0]=1;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(a.find(sum-k)!=a.end())
            count+=a[sum-k];
            a[sum]++;
        }
        return count;
    }
};