//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        int n=q.size();
        int i=0;
        vector<int> n1;
        vector<int> n2;
        while(i<n/2){
            n1.push_back(q.front());
            q.pop();
            i++;
        }
        while(!q.empty()){
            n2.push_back(q.front());
            q.pop();
        }
        vector<int> ans;
        i=0;
        while(i<n/2){
            ans.push_back(n1[i]);
            ans.push_back(n2[i]);
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends