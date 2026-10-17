class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
         vector<int> v1(nums.begin()+1,nums.end());
    vector<int> v2(nums.rbegin()+1,nums.rend());
   return max(solve(v1,n-1),solve(v2,n-1));
    }

    int solve(vector<int> a,int n){
        if(n==1) return a[0];

        int prev2=a[0];
        int prev1=max(a[0],a[1]);

        for(int i=2;i<n;i++){
            int cur=max(prev2+a[i],prev1);
            prev2=prev1;
            prev1=cur;        }

            return prev1;
    }
};