class Solution {
    void solve(vector<int> a,int curr,int &sum,int i){
         curr+=a[i];
        sum=max(sum,curr); 
         if(a.size()>i+2){
            for(int j=i+2;j<a.size();j++) solve(a,curr,sum,j);
         }
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return *max_element(nums.begin(),nums.end());
int sum=0;
for(int i=0;i<n;i++)
solve(nums,0,sum,i);
return sum;
    }
};