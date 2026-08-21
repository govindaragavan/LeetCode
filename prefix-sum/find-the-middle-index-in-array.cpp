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
      int total = prefix[n - 1];
for (int i = 0; i < n; i++) {
    int left = (i == 0 ? 0 : prefix[i - 1]);
    int right = total - prefix[i];
    if (left == right) return i;
}

      return -1;
    }
};