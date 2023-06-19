//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> v={-1,-1};
    int l=0;
    int h=n-1;
    while(l<=h){
        if(arr[l]!=x){
            l++;
        }
        if(arr[h]!=x){
            h--;
        }
        if(arr[l]==x && arr[h]==x){
                v[0]=l;
                v[1]=h;
                break;
        }
        
    }
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends