//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void helper(int n, vector<long int> &dp){
      if(n<=1){
          dp[n]=n;
      }
      if(dp[n]!=-1){
          return ;
      }
      helper(n-1,dp);
      helper(n-2,dp);
      dp[n]=(dp[n-1]+dp[n-2]) %1000000007;
  }
    int nthFibonacci(int n){
      vector< long int> dp(100001,-1);
      helper(n,dp);
      return dp[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends