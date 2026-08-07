class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b) {
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int n=points.size();
        int i=0,cnt=0;
        while(i<n){
            int a=points[i][1];
            cnt++;
            i++;
            while(i<n && points[i][0]<=a){
                i++;
            }
        }
        return cnt;
    }
};