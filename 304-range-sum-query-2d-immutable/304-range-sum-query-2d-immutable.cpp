class NumMatrix {
public:
        vector<vector<int>>aux;
   
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        aux.resize(n+1,vector<int>(m+1));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                aux[i][j]=aux[i-1][j]+aux[i][j-1]-aux[i-1][j-1] + matrix[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
          row2++;
        col2++;
        return aux[row2][col2]-aux[row2][col1]-aux[row1][col2]+aux[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */