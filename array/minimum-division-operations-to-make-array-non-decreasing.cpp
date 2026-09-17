class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n);
        int ans=0;
       for(int i=n-1;i>=1;i--){
        if(nums[i-1]>nums[i]){
         if(solve(nums[i-1])==0) return -1;
         if(solve(nums[i-1])!=0){
            while(nums[i-1]>nums[i]){
             nums[i-1]=nums[i-1]/solve(nums[i-1]); ans++;
             }
         }
        }
       }
       for(int x : nums) cout<<x<<" ";
       return ans;
    }

  int solve(int n){
   vector<int> ans;
   for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
       ans.push_back(i);
        if(i!=n/i)   ans.push_back(n/i);
    }
   }
//    cout<<ans.size()<<" ";
   if(ans.size()==0) return 0;
    return *max_element(ans.begin(),ans.end());
  }
};