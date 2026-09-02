class Solution {
public:
    bool checkValidString(string s) {
        stack<char> st;
        int c=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(st.empty() || s[i]=='(')
            st.push(s[i]);
            else if(s[i]==')')
            st.pop();
            else if(s[i]=='*'){ c++; continue;}
            else return false;
        }
    
int size=st.size();
if(size<=c) return true;

        return false;
    }
};