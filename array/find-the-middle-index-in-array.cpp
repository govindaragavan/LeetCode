class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        if(n==1)
        return 0;
        vector<int> prefix(n);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prefix[i]=sum;
        }
   for(int x : prefix)
   cout<<x<< " ";
      for(int i=0;i<n;i++){
        if(i==0){
        if(prefix[n-1]==0)
        return i;}
        else if(i==n-1 && prefix[n-2]==0)
        return i;
        else if(prefix[i]==prefix[n-1]-prefix[i-1])
        return i;
      }
      return -1;
    }
};