class Solution(object):
    def setZeroes(self, matrix):
        r=len(matrix)
        c=len(matrix[0])
        row=[False]*r
        col=[False]*c
        for i in range(r):
            for j in range(c):
                if(matrix[i][j]==0):
                    row[i]=True
                    col[j]=True
        
        for i in range(r):
            if(row[i]):
                for j in range(c):
                    matrix[i][j]=0
        
        for j in range(c):
            if(col[j]):
                for i in range(r):
                    matrix[i][j]=0