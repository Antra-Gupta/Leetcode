//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int nums1[], int nums2[], int n) {
       int l=0,h=n;
       while(l<=h){
           int cut1=(l+h)/2;
           int cut2=((2*n+1)/2)-cut1;
        //    cout<<cut2<<"";
           int l1=cut1==0?INT_MIN:nums1[cut1-1];
           int l2=cut2==0?INT_MIN:nums2[cut2-1];
           int r1=cut1==n?INT_MAX:nums1[cut1];
           int r2=cut2==n?INT_MAX:nums2[cut2];
           if(l1<=r2 && l2<=r1){
                   return max(l1,l2)+min(r1,r2);
           }
           else if(l1>r2){
               h=cut1-1;
           }
           else{
               l=cut1+1;
           }
        //    cout<< l1<<" "<<l2<<" "<<r1<<" "<<r2<<" ";
       }
       return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends