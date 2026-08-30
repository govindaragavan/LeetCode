class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        int l=0,r=n-1;
        int score;
        while(l<=r){
        if(tokens[l]<=power)
       {
        power-=tokens[l];
        score++;
       }
        }
        return score;
    }
};