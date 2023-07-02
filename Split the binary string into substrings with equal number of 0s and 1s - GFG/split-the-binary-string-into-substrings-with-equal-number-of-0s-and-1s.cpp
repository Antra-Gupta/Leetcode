//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int zero=0,one=0,count=0;
       for(int i=0;i<str.length();i++){
           if(str[i]=='0'){
               zero++;
           }
           else{
               one++;
           }
           if(zero==one){
               count++;
            //   cout<<zero<<" "<<one;
              zero=0;
              one=0;
           }
       }
      if(zero==0 && one==0)
    return count;
    
    return -1;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends