class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
set<int> set;     
int n=nums.size();
for(int i=0;i<n;i++){
    set.insert(nums[i]);
}
int ans=1,l=0;
for(auto it=set.begin();it!=set.end();it++){
    cout<<*it<<endl;
    if(set.find(*it + 1)!=set.end()) l++;
    else l=0;
    ans=max(ans,l);
}
        return ans;
    }
};