//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                 st.push(s[i]);
                //  cout<<0;
            }
            else if(s[i]==')'&& !st.empty()&& st.top()=='('){
                st.pop();
                // cout<<1;
            }
            else if(s[i]==']'&& !st.empty() && st.top()=='['){
                st.pop();
                // cout<<2;
            }
            else if(s[i]=='}'&& !st.empty() && st.top()=='{'){
                st.pop();
                // cout<<3;
            }
            else{
                // cout<<4;
                return false;
            }
            
        }
        if(st.empty()){
            return true;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends