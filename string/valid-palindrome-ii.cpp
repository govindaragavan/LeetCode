class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)
        mp[s[i]]++;
        int odd=0;
       int sumofodd=0;
     for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second % 2 != 0)
        sumofodd+=it->second;
     }
     if(sumofodd<3)
     return true;

     return false;
    }
};