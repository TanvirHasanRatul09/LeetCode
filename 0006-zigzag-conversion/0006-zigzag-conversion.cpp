class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>r(numRows);
        int cr=0;
        int i=0;
        int n=s.length();
        
        if(numRows==1)return s;
        while(i<n){
            if(cr==0){
                while(cr<=numRows-1 && i<n){
                    r[cr].push_back(s[i]);
                    cr++;
                    i++;
                }
            }
            cr--;
            if(cr==numRows-1){
                cr--;
                while(cr>0 && i<n){
                    r[cr].push_back(s[i]);
                    cr--;
                    i++;
                }
            }
        }
        string ans;
        for (string rows:r){
            ans+=rows;
        }
        return ans;
    }
};