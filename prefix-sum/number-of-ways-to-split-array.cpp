class Solution {

public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
int sum=0;
for(int i=0;i<n;i++){
    sum+=nums[i];
    prefix[i]=sum;
}  
// prefix.insert(prefix.begin(),0);
for(int x : prefix) cout<<x<<" ";  
cout<<endl;
int ans=0; 
for(int i=0;i<n;i++){
    if(prefix[i]>=prefix[n-1]-prefix[i] && i!=n-1){ ans++; cout<<i<<" "<<prefix[i]<<" "<<prefix[n-1]-prefix[i]<<endl;}
} 
return ans;
    }
};