class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0;
        for(int j=0;j<k;j++){
            lsum+=cardPoints[j];
        }
         int res=lsum;
       for(int i=0;i<k;i++){
        lsum-=cardPoints[k-1-i];
        rsum+=cardPoints[cardPoints.size()-1-i];
        res=max(res,lsum+rsum);
       }
       return res;
       }
    };