class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int r=board.size();
        int c=board[0].size();
        int cnt=0;
        vector<vector<int>> newb=board;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int dr[]={-1,-1,-1,0,0,1,1,1};
                int dc[]={-1,0,1,-1,1,-1,0,1};
                for(int k=0;k<8;k++){
                    int nr=i+dr[k];
                    int nc=j+dc[k];
                    if(nc>=0 && nc<c && nr>=0 && nr<r){
                        if(board[nr][nc]==1){
                            cnt++;
                        }
                    }
                }
                if(board[i][j]==1){
                    if(cnt<2){
                        newb[i][j]=0;
                    }
                    if(cnt==2 || cnt==3){
                        newb[i][j]=1;
                    }
                    if(cnt>3){
                        newb[i][j]=0;
                    }
                }
                if(board[i][j]==0 && cnt==3){
                    newb[i][j]=1;
                }
                cnt=0;
            }
        }
        board=newb;
    }
};