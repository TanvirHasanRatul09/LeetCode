class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n=s.length();
        int j=0;
        for(int i=n-1;i>=0;){
            if(i>0 && s[i]==' '){
                i--;
                continue;
            }
            int a=ans.size();
            while(i>=0 && s[i]!=' '){
                ans+=s[i];
                i--;
            }
            reverse(ans.begin()+a,ans.end());
            while(i>=0 && s[i]==' '){
                i--;
            }
            if(i>=0)ans+=' ';
        }
        return ans;
    }
};