class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> st1;
        vector<char> st2;
        for(char c : s){
        if(!st1.empty() && c=='#')
        st1.pop_back();
        else
        st1.push_back(c);
        }
        for(char c : t){
        if(!st2.empty() && c=='#')
        st2.pop_back();
        else
        st2.push_back(c);
        }
        if(st1!=st2)
        return false;
        return true;
    }
};