class Solution {
public:
    int climbStairs(int n) {
    int prev1=0,prev2=1;
    int curr=0;
    for(int i=2;i<=n+1;i++){
        curr=prev2+prev1;
        prev1=prev2;
        prev2=curr;
    }
    return curr;
    }
};