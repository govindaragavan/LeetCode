class Solution {
public:
    int countCommas(int n) {
       int len=to_string(n).length() ;
       if(len<4 || n<1000) return 0;
       else return n-999;

    }
};