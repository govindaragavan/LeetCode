class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = s.size(),m=g.size();
      int i=0,j=0;
      while(i<n && j<m){
            if(s[i]>=g[j]){
     i++;
  }
        j++;
      }
        return i;
    }
};