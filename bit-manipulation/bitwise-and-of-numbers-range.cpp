class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=left;
        for(int i=0;i<right-left+1 && left<right;i++){
            ans=ans^(++left);
            if(ans==0)
            return 0;        }
        return ans;
    }
};