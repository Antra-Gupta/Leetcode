class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxi=values[0];
        int ans=-1;
        int n=values.size();
        for(int i=1;i<n;i++){
            ans=max(ans,maxi+values[i]-i);
            maxi=max(maxi,values[i]+i );
        }
         return ans;
    }
};