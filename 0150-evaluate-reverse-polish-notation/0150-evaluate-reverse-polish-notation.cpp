class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string c:tokens){
            if(c=="+"){
                int s=st.top();
                st.pop();
                int f=st.top();
                st.pop();
                st.push(s+f);
            }else if(c=="-"){
                int s=st.top();
                st.pop();
                int f=st.top();
                st.pop();
                st.push(f-s);
            }else if(c=="*"){
                int s=st.top();
                st.pop();
                int f=st.top();
                st.pop();
                st.push(s*f);
            }else if(c=="/"){
                int s=st.top();
                st.pop();
                int f=st.top();
                st.pop();
                st.push(f/s);
            }else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};