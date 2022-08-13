class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int> > dp(m+1,vector<int>(n+1,0));
     
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1] + matrix[i - 1][j- 1]-dp[i-1][j- 1];
            }
        }
        vector<vector<int>> ans(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                int r1=max(0,i-k)+1; 
                int c1=max(0,j-k)+1;
                int r2= min(i+k+1,m); 
                int c2= min(j+k+1,n);      
                ans[i][j]=dp[r2][c2]+dp[r1-1][c1-1]-dp[r1-1][c2]-dp[r2][c1-1];     
            }
        }
      return ans; 
    }
};