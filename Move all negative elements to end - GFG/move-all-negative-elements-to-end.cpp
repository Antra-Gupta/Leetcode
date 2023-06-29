//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int k=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                arr[k]=arr[i];
                k++;
            }
            else{
                v.push_back(arr[i]);
            }
        }
        for(int j=0;j<v.size();j++){
            arr[k]=v[j];
            k++;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends