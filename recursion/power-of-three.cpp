class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
        return false;
        if(n==1)
        return true;
        if(isPowerOfThree(n/3))
        return true;
        return false;
    }
};