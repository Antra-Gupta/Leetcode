//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    int square(int n){
        int ans=0;
        while(n!=0){
            int rem=n%10;
            ans+=(rem*rem);
            n=n/10;
        }
        return ans;
    }
public:

    int isHappy(int n){
      unordered_set<int> s;
      while(n!=1 && !s.count(n)){
          s.insert(n);
          n=square(n);
      }
       return n==1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends