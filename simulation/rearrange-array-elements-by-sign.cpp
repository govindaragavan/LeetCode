class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        if (nums[0] < 0) {
            int k = 1;
            while (k < n) {
                if (nums[k] > 0) {
                    int i = k;
                    while (i > 0) {
                        swap(nums[i], nums[i - 1]);
                        i--;
                    }
                    break;
                }
                k++;
            }
        }

        for (int i = 1; i < n; i++) {
            if ((nums[i - 1] > 0) == (nums[i] > 0)) {
                int j = i + 1;

                while (j < n) {
                    if ((nums[i] > 0) != (nums[j] > 0)) {
                        int k = j;

                        while (k > i) {
                            swap(nums[k], nums[k - 1]);
                            k--;
                        }

                        break;
                    }
                    j++;
                }
            }
        }

        return nums;
    }
};