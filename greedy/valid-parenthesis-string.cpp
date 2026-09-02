class Solution {
public:
    bool checkValidString(string s) {
        stack<char> st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(st.empty() || s[i]=='(')
            st.push(s[i]);
            else if(s[i]==')' || s[i]=='*')
            st.pop();
            else return false;
          

        }
        return true;
    }
};