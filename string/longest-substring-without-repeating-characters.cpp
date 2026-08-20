class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")
        return 0;
        unordered_map<char,int> mp;
        int l=0,r=0;
        int ans=INT_MIN;
        int len=0;
       while(r<s.length()){
        mp[s[r]]++;
        while(mp[s[r]]>1){
            mp[s[l]]--;
            l++;
            len--;
        }
        len++;
        ans=max(ans,len);
        r++;
       }
       return ans;
    }
};