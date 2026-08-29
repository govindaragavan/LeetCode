class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans;
        multiset<int> s;

        for (int i = 0; i < k; i++) {
            s.insert(nums[i]);
        }

        auto it = s.begin();
        advance(it, x - 1);

        if (*it < 0)
            ans.push_back(*it);
        else
            ans.push_back(0);

        for (int i = k; i < nums.size(); i++) {

            s.erase(s.find(nums[i - k]));

            s.insert(nums[i]);

            auto it = s.begin();
            advance(it, x - 1);

            if (*it < 0)
                ans.push_back(*it);
            else
                ans.push_back(0);
        }

        return ans;
    }
};