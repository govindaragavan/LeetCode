class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string current;

        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                if (current == "..") {
                    if (!st.empty()) {
                        st.pop();
                    }
                }
                else if (!current.empty() && current != ".") {
                    st.push(current);
                }

                current = "";
            } 
            else {
                current += path[i];
            }
        }

        if (st.empty()) return "/";

        string result = "";
        while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }

        return result;
    }
};