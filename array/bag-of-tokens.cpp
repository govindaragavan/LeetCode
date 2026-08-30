class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int l=0,r=n-1;
        int score=0;
        int ans=0;
        while(l<=r){
        if(tokens[l]<=power)
       {power-=tokens[l];
      score++;
        l++;
       }
       else if(power<tokens[l])
       {
        power+=tokens[r];
        score--;
        r--;
       }
               ans=max(ans,score);
        }
        return ans;
    }
};