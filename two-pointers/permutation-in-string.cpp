class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int n=s1.length();
   multiset<char> set1,set2;
    for(char x : s1)
    set1.insert(x);
      int l=0;
      string s;
      sort(s1.begin(),s1.end());
      for(int i=0;i<s2.length();i++){
        s+=s2[i];
        if(i-l+1==n){
            string temp=s;
            sort(temp.begin(),temp.end());
            if(temp==s1)
            return true;
            s.erase(0,1);
        l++;
        }
      }

      return false;
    }
};