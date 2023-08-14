//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
int setBit(int n, int pos) {
return ((n & (1 << pos)) != 0);
}
   vector<int> singleNumber(vector<int> nums) 
    {
        /*sort(nums.begin(),nums.end());
vector<int> ans;
for(int i = 0; i < nums.size();i++)
{
if(nums[i] == nums[i + 1])
{
i++;
}
else{
ans.push_back(nums[i]);
}
}
return ans;*/
        vector<int> ans;
        int n=nums.size();
        int xorsum=0;
        for(int i=0;i<n;i++){
            xorsum=xorsum^nums[i];
        }
        int tempxor=xorsum;
        int pos=0;
        int setbit=0;
        while(setbit!=1){
            setbit=xorsum&1;
            pos++;
            xorsum=xorsum>>1;
        }
        int newxor=0;
        for(int i=0;i<n;i++){
            if(setBit(nums[i],pos-1)==1){
            newxor=newxor^nums[i];
            }
        }
     ans.push_back(newxor);  
     ans.push_back(newxor^tempxor); 
     sort(ans.begin(),ans.end());
     return ans;
    }
    
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends