//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
       int countOne=0;
       for(int i=0;i<n;i++){
           if(a[i]==1){
            countOne+=a[i];
            a[i]=-1;
           }
           else
               a[i]=1;
       }
       int ans=0;
       int curr=0;
       for(int i=0;i<n;i++){
           curr+=a[i];
           if(curr<0){
               curr=0;
           }
           ans=max(ans,curr);
       }
       return ans+countOne;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends