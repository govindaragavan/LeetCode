class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        if(nums[0]<0){
           while(k<n){
            if(nums[k]>0){ swap(nums[0],nums[k]); break;}
           }
   k++;
        }
        for(int i=1;i<n;i++){
           if(nums[i-1]*nums[i]>0){
            int j=i+1;
            while(j<n){
                if(nums[i]*nums[j]<0)
                {swap(nums[i],nums[j]); break;}
                j++;
            }
           }
        }
        return nums;
    }
};