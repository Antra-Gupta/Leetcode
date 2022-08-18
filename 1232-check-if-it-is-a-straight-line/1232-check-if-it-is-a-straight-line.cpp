class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        // int m=coordinates[0].size();
        int x=coordinates[1][0]-coordinates[0][0];
        int y=coordinates[1][1]-coordinates[0][1];
        // cout<<x<<" "<<y<<endl;
        for(int i=2;i<n;i++){
            if((coordinates[i][1]-coordinates[i-1][1])*x!=y*(coordinates[i][0]-coordinates[i-1][0])){
                return false;
            }
        }
        return true;
    }
};