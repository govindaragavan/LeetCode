class Solution {
public:
    string makeGood(string s) {
     stack<char> st;
     int n = s.length();
     for(int i=0;i<n;i++){
        if(isupper(s[i])){
        while(!st.empty()  && toupper(st.top())==s[i])
        st.pop();
        }
        else
        st.push(s[i]);
     }
    string res= "";
    while(!st.empty()){
        res+=st.top();
        st.pop();
    } 
    reverse(res.begin(),res.end()); 
    return res;
    }
};