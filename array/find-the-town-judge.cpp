class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, int> mp;
        set<int> un;
        if (trust.size() == 0 && n == 1)
            return 1;
        for (int i = 0; i < trust.size(); i++) {
            mp[trust[i][1]]++;
            un.insert(trust[i][0]);
        }
        for (int i = 0; i < trust.size(); i++) {
            if (mp[trust[i][1]] == (n - 1) && un.find(trust[i][1]) == un.end())
                    return trust[i][1];
        }
        return -1;
    }
};