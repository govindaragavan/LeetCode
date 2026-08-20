class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        int n = s.length();
        if(n<=1)
        return n;
        for(int i = 0 ;i<s.length();i++){
         if(s[i]=='B'){
            if(!st.empty() && st.top()=='A'){
            n-=2;
           st.pop();}
           else
           st.push(s[i]);
         }
         else if(!st.empty() && s[i]=='D'){
            if(st.top()=='C'){
            n-=2;
           st.pop();
           }
           else
           st.push(s[i]);
         }
         else
         st.push(s[i]);
        }
        return n;
    }
};