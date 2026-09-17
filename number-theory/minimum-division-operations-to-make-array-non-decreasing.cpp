class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
       for(int i=n-1;i>=1;i--){
        if(nums[i-1]>nums[i]){
        int t=solve(nums[i-1]);
         if(t!=0){
            while(nums[i-1]>nums[i] ){
                int tmp =solve(nums[i-1]);
                cout<<tmp<<" ";
             if(tmp!=0){
             nums[i-1]=nums[i-1]/tmp; ans++;}
             else break;
             }
         }
        if(nums[i-1]>nums[i]) return -1;
        }
       }
    //    for(int x : nums) cout<<x<<" ";
       return ans;
    }

  int solve(int n){
   int ans=0;
   for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        ans=max(ans,i);
        if(i!=n/i)   ans=max(ans,n/i);
    }
   }
    return ans;
  }
};