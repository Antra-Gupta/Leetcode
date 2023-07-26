//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void dfs(int row,int col,vector<vector<int>> &visited,vector<vector<int>>& grid,vector<pair<int,int>> &vec,int row0,int col0){
        int n=grid.size();
        int m=grid[0].size();
        visited[row][col]=1;
        vec.push_back({row-row0,col-col0});
        int deltarow[4]={0,-1,0,1};
        int deltacol[4]={-1,0,1,0};
        for(int i=0;i<4;i++){
            int nrow=row+deltarow[i];
            int ncol=col+deltacol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && !visited[nrow][ncol]){
                    dfs(nrow,ncol,visited,grid,vec,row0,col0);
                }
            }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        set<vector<pair<int,int>>> st;
         int n=grid.size();
       int m=grid[0].size();
       vector<vector<int>> visited(n,vector<int> (m,0));
       int count=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               
               if(!visited[i][j]&& grid[i][j]==1){
                   vector<pair<int,int>> vec;
                   dfs(i,j,visited,grid,vec,i,j);
                   st.insert(vec);
               }
           }
       }
           return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends