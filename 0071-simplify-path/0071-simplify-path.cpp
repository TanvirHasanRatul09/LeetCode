class Solution {
public:
    string simplifyPath(string path) {

        stack<string> st;
        stringstream ss(path);
        string dir;
        while(getline(ss,dir,'/')){
            if(dir.empty() || dir=="."){
                continue;
            }else if(dir==".."){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(dir);
            }
        }
        string res;
        while(!st.empty()){
            res="/"+st.top()+res;
            st.pop();
        }
        return res.empty()?"/":res;
    }
};