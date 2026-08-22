class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n!=1 && n%2!=0) return false;
        if(n==1)
        return true;
       if( isPowerOfTwo(n/2))
       return true;
        return false;
    }
};