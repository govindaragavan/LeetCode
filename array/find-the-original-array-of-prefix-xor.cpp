class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
      vector<int> res;
       int ans=0;

       for(int i=0;i<pref.size();i++){
        ans=ans^pref[i];
    res.push_back(ans);
    ans=pref[i];
       }  
       return res;
    }
};