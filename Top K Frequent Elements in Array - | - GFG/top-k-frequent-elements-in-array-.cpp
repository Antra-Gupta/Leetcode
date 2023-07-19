//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            minh.push({i->second,i->first});
            if(minh.size()>k){
                minh.pop();
            }
        }
        vector<int> ans(k,0);
        int i=1;
        while(minh.size()>0){
            ans[k-i]=(minh.top().second);
            minh.pop();
            i++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends