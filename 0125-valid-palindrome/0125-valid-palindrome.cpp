class Solution {
public:
    bool isPalindrome(string s) {
        string s1,s2;
        int n=s.length();
        int i=n-1,j=0;
        if(n==1)return true;            
        while(j<n){
            if((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z') || (s[j]>='0' && s[j]<='9')){
                s2+=tolower(s[j]);
            }
            j++;
        }
        while(i>=0){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                s1+=tolower(s[i]);
            }
            i--;
        }
        if(s1==s2){
            return true;
        }else{
            return false;
        }
    }
};