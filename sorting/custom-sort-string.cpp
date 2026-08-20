class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mp;
        string ans = "";

        // Count characters in s
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        // Add characters according to order
        for (int i = 0; i < order.length(); i++) {
            char ch = order[i];

            while (mp[ch] > 0) {
                ans += ch;
                mp[ch]--;
            }
        }

        // Add characters not present in order
        for (auto it : mp) {
            while (it.second > 0) {
                ans += it.first;
                it.second--;
            }
        }

        return ans;
    }
};