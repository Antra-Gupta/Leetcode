class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size() == 1) return triangle[0][0];
        int n=triangle.size();
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==0&&j==0){
                dp[i][j]=triangle[i][j];
            }
            else{
                int u=INT_MAX,d=INT_MAX;
                if(j<=i-1&&i-1>=0){
                    u=triangle[i][j]+dp[i-1][j];
                }
                if(j-1<=i-1 && i-1>=0 &&j-1>=0){
                    d=triangle[i][j]+dp[i-1][j-1];
                }
                dp[i][j]=min(u,d);
            }
        }
    }
 int mini=INT_MAX;
  for(int j=0;j<n;j++){
       mini=min(mini,dp[n-1][j]);
   }
    return mini;
    
    }
};