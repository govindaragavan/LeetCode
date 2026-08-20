class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int c=0,sum=0;
        for(int i=0;i<nums.size() && c<=k;i++){
            if(nums[i]<0){
            nums[i]=(-nums[i]);
            c++;
            }
            if(c==k)
            break;
        }
        sort(nums.begin(),nums.end());
        if(c!=k){
            if((c-k)%2!=0)
            nums[0]=-nums[0];
            c=k;
        }
        if(c==k){
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        }
        return sum;
    }
};