//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& a) {
       vector<int> dp(n,1),hash(n);
       int ans=0;
       int lastIndex=0;
       for(int ind=0;ind<n;ind++){
           hash[ind]=ind;
           for(int prev=0;prev<ind;prev++){
               if(a[prev]<a[ind] && dp[prev]+1>dp[ind]){
                   dp[ind]=1+dp[prev];
                   hash[ind]=prev;
               }
           }
           if(ans<dp[ind]){
           ans=dp[ind];
           lastIndex=ind;
           }
        //   cout<<hash[ind]<<" ";
       }
       vector<int> temp;
       temp.push_back(a[lastIndex]);
       while(hash[lastIndex]!=lastIndex){
           temp.push_back(a[hash[lastIndex]]);
           lastIndex=hash[lastIndex];
       }
       reverse(temp.begin(),temp.end());
       return temp;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> res = obj.longestIncreasingSubsequence(N, arr);
        for (auto x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends