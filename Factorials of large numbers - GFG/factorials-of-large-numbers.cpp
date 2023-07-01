//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
class Node{
    public:
    int data;
    Node *next;
    Node(int n){
        data=n;
        next=NULL;
    }
};
    void multiply(Node* &tail,int n){
        Node *prev=tail;
        Node *temp=tail;
        int carr=0;
        while(temp!=NULL){
            int val=temp->data*n+carr;
            temp->data=val%10;
            carr=val/10;
            prev=temp;
            temp=temp->next;
        }
        while(carr!=0){
            prev->next=new Node((int)carr%10);
            carr=carr/10;
            prev=prev->next;
        }
    }
    vector<int> factorial(int N){
        vector<int> res;
        Node *tail=new Node(1);
        // res.push_back(1);
        for(int j=2;j<=N;j++){
            multiply(tail,j);
            // int carr=0;
            // for(int i=0;i<res.size();i++){
            //     int val=res[i]*j+carr;
            //     res[i]=val%10;
            //     carr=val/10;
            // }
            // while(carr!=0){
            //     res.push_back(carr%10);
            //     carr=carr/10;
            // }
        }
        while(tail!=NULL){
            res.push_back(tail->data);
            tail=tail->next;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends