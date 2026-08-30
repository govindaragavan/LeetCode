class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(ans,{},0,nums);
        return ans;
    }
    private:
    void solve(vector<vector<int>>& ans, vector<int> curr,int i,vector<int> nums)
    {
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        solve(ans,curr,i+1,nums);

        curr.pop_back();
        solve(ans,curr,i+1,nums);
    }
};