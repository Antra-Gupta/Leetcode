//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    int pos[n],neg[n];
	    int j=0,k=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            pos[j++]=arr[i];
	        }
	        else{
	            neg[k++]=arr[i];
	        }
	    }
	
	    int i=0,m1=0,m2=0;
	    while(m1<k&&m2<j){
	        arr[i++]=pos[m2++];
	        arr[i++]=neg[m1++];
	    }
	    while(m1<k){
	        arr[i++]=neg[m1++];
	    }
	    while(m2<j){
	        arr[i++]=pos[m2++];
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends