//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int row,int col,vector<vector<int>> &visited,vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        visited[row][col]=1;
        int deltarow[8]={0,-1,-1,-1,0,1,1,1};
        int deltacol[8]={-1,-1,0,1,1,1,0,-1};
        for(int i=0;i<8;i++){
            int nrow=row+deltarow[i];
            int ncol=col+deltacol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !visited[nrow][ncol]){
                    dfs(nrow,ncol,visited,grid);
                }
            }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
       int m=grid[0].size();
       vector<vector<int>> visited(n,vector<int> (m,0));
       int count=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(!visited[i][j]&& grid[i][j]=='1'){
                   count++;
                   dfs(i,j,visited,grid);
               }
           }
       }
       return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends