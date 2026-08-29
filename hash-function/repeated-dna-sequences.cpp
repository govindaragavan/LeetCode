class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        int n=s.length();
        int l=0;
        string cur="";
        vector<string> ans;
        for(int i=0;i<n;i++){
            cur+=s[i];
            if(i-l+1==10){
                mp[cur]++;
                cur.erase(0,1);
                l++;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        if(it->second>1)
        ans.push_back(it->first);
        return ans;
    }
};