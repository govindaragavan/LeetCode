class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        for (int i = 0; i < pow(2, nums.size()); i++) {
            vector<int> temp;
            for (int j = 0; j < nums.size(); j++) {
                if (i & (1 << j))
                    temp.push_back(nums[j]);
            }
            res.insert(temp);
        }
        vector<vector<int>> ans;
        for(vector<int> num : res)
        ans.push_back(num);
        return ans;
    }
};