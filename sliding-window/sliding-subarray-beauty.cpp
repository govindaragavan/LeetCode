class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans;
        int freq[101] = {};
        for (int i = 0; i < k; i++) {
            freq[nums[i] + 50]++;
        }

        for (int i = k; i <= nums.size(); i++) {

            int count = 0;
            int beauty = 0;

            for (int j = -50; j < 0; j++) {
                count += freq[j + 50];

                if (count >= x) {
                    beauty = j;
                    break;
                }
            }

            ans.push_back(beauty);

            if (i < nums.size()) {
                freq[nums[i - k] + 50]--;
                freq[nums[i] + 50]++;
            }
        }

        return ans;
    }
};