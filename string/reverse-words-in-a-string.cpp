class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string curr="";
        stack<string> st;
        for(int i=0;i<n;i++){
            if(s[i]!=' ')
            curr+=s[i];
            else  {
                if(!curr.empty()){
                    st.push(curr);
                    curr="";
                }
            }
        }
        if(!curr.empty()) st.push(curr);

        string res="";
        while(!st.empty()){
   res+=st.top();
   st.pop();
   if(!st.empty()) res+=' ';
        }
        return res;
    }
};