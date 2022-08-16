class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size();
        int curr=0,mini=INT_MAX,ans=-1;
        for(int i=0;i<n;i++){
            if(points[i][0]==x || points[i][1]==y){
                curr=abs(x-points[i][0])+abs(y-points[i][1]);
                if(curr<mini){
                    mini=curr;
                    ans=i;
                }
            }
            
        }
        return ans;
    }
};