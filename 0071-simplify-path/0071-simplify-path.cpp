class Solution {
public:
    string simplifyPath(string path) {

        stack<char> st;
        int dotCount = 0;
        bool hasOther = false;

        for(char ch : path) {

            // When a component ends
            if(ch == '/') {

                // "."
                if(!hasOther && dotCount == 1) {

                    // remove the '.'
                    if(!st.empty())
                        st.pop();
                }

                // ".."
                else if(!hasOther && dotCount == 2) {

                    // remove the two dots
                    if(!st.empty()) st.pop();
                    if(!st.empty()) st.pop();

                    // remove '/' before ..
                    if(!st.empty() && st.top() == '/')
                        st.pop();

                    // remove previous directory
                    while(!st.empty() && st.top() != '/') {
                        st.pop();
                    }
                }

                // reset current component
                dotCount = 0;
                hasOther = false;

                // avoid multiple '/'
                if(!st.empty() && st.top() == '/')
                    continue;

                st.push('/');
            }

            else {

                st.push(ch);

                if(ch == '.') {
                    dotCount++;
                }
                else {
                    hasOther = true;
                }
            }
        }

        // Handle the last component
        if(!hasOther && dotCount == 1) {

            if(!st.empty())
                st.pop();
        }

        else if(!hasOther && dotCount == 2) {

            // remove ".."
            if(!st.empty()) st.pop();
            if(!st.empty()) st.pop();

            // remove '/'
            if(!st.empty() && st.top() == '/')
                st.pop();

            // remove previous directory
            while(!st.empty() && st.top() != '/') {
                st.pop();
            }
        }

        // Remove final '/'
        if(!st.empty() && st.top() == '/') {
            st.pop();
        }

        string ans;

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        if(ans.empty())
            return "/";

        return ans;
    }
};