class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(char c : s){
            if(isalnum(c)){
            char x = tolower(c);
             s1+= x;}
        }
        string org=s1;
        reverse(s1.begin(),s1.end());
        if(s1==org)
        return true;
        return false;
    }
};