class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.length();
        if(n==0 || n<k)
        return 0;
        unordered_map<char,int> mp;
        for(char c: s)
        mp[c]++;
        int l=0;
        while(l<n && mp[s[l]]>=k)
        l++;
        if(l==n)
        return l;
        int ls1= longestSubstring(s.substr(0,l),k);
        while(l<n && mp[s[l]]<k)
        l++;
        int ls2=longestSubstring(s.substr(l),k);
      int ans=max(ls1,ls2);
      return ans;
        }

    
};