//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long res=0;
       int i=0,j=n-1;
       int lm=arr[0],rm=arr[n-1];
       while(i<=j){
           if(arr[i]<=arr[j]){
               if(arr[i]>=lm){
                   lm=arr[i];
               }
               else{
                  res+=(lm-arr[i]);
               }
               i++;
           }
           else{
               if(arr[j]>=rm){
                   rm=arr[j];
               }
               else{
                  res+=rm-arr[j]; 
               }
               j--;
           }
       }
       return res;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends