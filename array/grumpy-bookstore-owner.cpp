class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
       unordered_map<int,int> mp;
       int count=0,ans=0;
       int r=0;
       for(int i=0;i<grumpy.size();i++){
        if(grumpy[i]==0)
        count = count + customers[i];
       }
       for(int i=0;i<grumpy.size();i++){
          r++;
          if(grumpy[i]==1 && r<=minutes){
          count+=customers[i];
          }
          ans=max(count,ans);
          if(r==minutes)
          {
           r--;
           if(grumpy[i-minutes+1]==1)
           count-=customers[i-minutes+1];
       }
       }
       return ans;
    }
};