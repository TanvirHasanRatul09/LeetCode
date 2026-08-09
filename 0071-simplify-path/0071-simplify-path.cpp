class Solution {
public:
    string simplifyPath(string path) {

        stack<string> st;
        string temp = "";

        for(char ch : path) {

            if(ch != '/') {
                temp += ch;
            }
            else {

                if(temp == "" || temp == ".") {
                    // Ignore
                }
                else if(temp == "..") {
                    if(!st.empty()) {
                        st.pop();
                    }
                }
                else {
                    st.push(temp);
                }

                temp = "";
            }
        }

        // Process the last component
        if(temp == "..") {
            if(!st.empty()) {
                st.pop();
            }
        }
        else if(temp != "" && temp != ".") {
            st.push(temp);
        }

        string ans = "";

        while(!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        if(ans.empty()) {
            return "/";
        }

        return ans;
    }
};