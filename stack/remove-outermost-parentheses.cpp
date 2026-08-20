class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        st.push('(');
        string res="";
        int n=s.length();
        for(int i=1;i<n;i++){
        if(st.empty() && s[i]=='(')
            st.push('(');
        else if(s[i]=='('){
            st.push(s[i]);
            res+='(';
            }
            else{
                if(st.size()==1){
                 st.pop();                
                continue;}
                res+=')';
                st.pop();                
            }
        }
                    return res;

    }
};