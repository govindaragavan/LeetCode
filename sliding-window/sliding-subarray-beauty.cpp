class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans;
        int n= nums.size();
        int l=0;
        vector<int> arr;
        for(int i=0;i<n;i++){
       arr.push_back(nums[i]);
       if(i-l+1==k){
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        int e = temp[x-1]<0 ? temp[x-1] : 0;
        ans.push_back(e);
        arr.erase(arr.begin());
        l++;
       }
        }
        return ans;
    }
};