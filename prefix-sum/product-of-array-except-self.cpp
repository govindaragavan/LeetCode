class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        int prod=1;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            prefix[i]=prod;
        }
        prod=1;
        for(int i=n-1;i>=0;i--){
            prod*=nums[i];
            suffix[i]=prod;
        }
        vector<int>a(n);
        for(int i=0;i<n;i++){
         if(i==0)
         a[i]=suffix[i+1];
         else if(i==n-1)
         a[i]=prefix[i-1];
         else {
          int left=prefix[i-1];
          int right=suffix[i+1];
          a[i]=left*right;}
        }
        return a;
    }
};