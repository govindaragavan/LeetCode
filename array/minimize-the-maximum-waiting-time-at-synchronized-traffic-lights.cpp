class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxLight = *max_element(lights.begin(), lights.end());

        int ans = 0;

        for (int t : arrivalTime) {
            int r = t % period;

            if (r >= maxLight) {
                ans = max(ans, period - r);
            }
        }

        return ans;
    }
};