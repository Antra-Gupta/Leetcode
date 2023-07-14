//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
       vector<vector<int>> ans;
        int t;
        sort(intervals.begin(),intervals.end());
        stack<int>s;
        int n=intervals.size();
        s.push(intervals[0][0]);
        s.push(intervals[0][1]);
        for(int i=1;i<n;i++){
            if(s.top()<intervals[i][0]){
            s.push(intervals[i][0]);
            s.push(intervals[i][1]);
            }
            else{
                if(!s.empty())
                t = s.top();
                s.pop();
                s.push(max(t,intervals[i][1]));   
            }
        }
        int k=0;
        while(s.size()>=2){
            int a,b;
            a=(s.top());
            s.pop();
            b=(s.top());
            s.pop();
            ans.push_back({b,a});
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends