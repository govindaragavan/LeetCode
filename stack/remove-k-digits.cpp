class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();

        if (k == n)
            return "0";

        vector<char> st;
        st.push_back(num[0]);

        int i = 1;

        for (; i < n; i++) {

            while (k > 0 && !st.empty() && st.back() > num[i]) {
                st.pop_back();
                k--;
            }

            st.push_back(num[i]);
        }
        while (k > 0) {
            st.pop_back();
            k--;
        }
        int j = 0;
        while (j < st.size() && st[j] == '0')
            j++;

        if (j == st.size())
            return "0";

        string res(st.begin() + j, st.end());

        return res;
    }
};