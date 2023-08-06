//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        vector<int> prev(N,0);
        for(int j=0;j<N;j++){
           prev[j]=Matrix[0][j];
       }


       for(int i=1;i<N;i++){
        vector<int> curr(N,0);
           for(int j=0;j<N;j++){
               int ld,rd;
               int up=Matrix[i][j] + prev[j];
               if(j-1>=0)
               ld=Matrix[i][j] + prev[j-1];
               else{
               ld=-1e9;
               }
               if(j+1<N){
                   rd=Matrix[i][j] + prev[j+1];
               }
               else{
                   rd=-1e9;
               }
               curr[j]=max(up,max(ld,rd));
           }
           prev=curr;
       }
       int ans=INT_MIN;
       for(int j=0;j<N;j++){
           ans=max(ans,prev[j]);
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends