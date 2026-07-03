class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int p=0,a;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                a=prices[i]-prices[i-1];
                p+=a;
            }
        }
        return p;
    }
};