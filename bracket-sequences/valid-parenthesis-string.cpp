class Solution {
public:
    bool checkValidString(string s) {
        int l=0,h=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                l++;
                h++;
            }
            else if(s[i]==')'){
                l--;h--;
            }
            else {
                l--;h++;
            }
            if(h<0) return false;
            l=max(0,l);
        }
        return l==0;
    }
};