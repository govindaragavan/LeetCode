class Solution {
public:
    string clearDigits(string s) {
        stack<int> st;
        int n=s.length();
        for(int i=0;i<n;i++){
         int ch = s[i];
         cout<<ch<<" ";
         if(ch<58){
         st.pop();
         }
         else
         st.push(i);
        }
        if(st.empty())
        return "";
        string res="";
        while(!st.empty()){
           res+=s[st.top()];
           st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};