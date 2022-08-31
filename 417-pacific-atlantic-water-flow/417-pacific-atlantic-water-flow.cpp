class Solution {
public:
   vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    int n = heights.size();
    int m = heights[0].size();
    vector<vector<bool> > pacific(n, vector<bool> (m,false));
    vector<vector<bool> > atlantic(n, vector<bool> (m,false));
    queue<pair<int,int> > pq;
    queue<pair<int,int>> aq;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == 0 || j == 0){
                pq.push({i,j});
                pacific[i][j] = true;
            }
            
            if(i == n-1 || j == m-1){
                aq.push({i,j});
                atlantic[i][j] = true;
            }
        }
    }
    vector<vector<int> > ans;
    
    bfs(heights, pq, pacific);
    bfs(heights, aq, atlantic);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(pacific[i][j] && atlantic[i][j]){
                ans.push_back({i,j});
            }
        }
    }
    return ans;                           
}

void bfs(vector<vector<int>> &heights, queue<pair<int,int> > q, vector<vector<bool> > &vis){
    int n = heights.size();
    int m = heights[0].size();
    vector<int> dx = {0,0,1,-1};
    vector<int> dy = {-1,1,0,0};
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && ny >= 0 && nx < n && ny < m && vis[nx][ny] == false && heights[nx][ny] >= heights[x][y]){
                q.push({nx,ny});
                vis[nx][ny] = true;
            }
        }
    }
    
    return ;
}
};