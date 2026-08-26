class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)
        mp[s[i]]++;
        int odd=0;
       int sumofodd=0;
     for(auto it=mp.begin();it!=mp.end();++it){
        if(it->second%2!=0){
          odd++;
          sumofodd+=it->second;}
          cout<<it->second<<" ";
     }
    cout<<odd<<" "<<sumofodd;
     if(odd==2 && sumofodd==2)
     return true;
     else if(odd<=1)
     return true;

     return false;
    }
};