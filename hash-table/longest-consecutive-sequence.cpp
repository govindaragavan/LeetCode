class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
set<int> set;     
int n=nums.size();
if(n==0) return 0;
for(int i=0;i<n;i++){
    set.insert(nums[i]);
}
if(set.size()==1) return 1;
int ans=0,l=1;
for(auto it=set.begin();it!=set.end();it++){
    cout<<*it<<endl;
    ans=max(ans,l);
    if(set.find(*it + 1)!=set.end()) l++;
    else l=1;
}
        return ans;
    }
};