class Solution {
public:
    
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int, int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int> freq;
        for(auto i:mp){
            freq.push_back(i.second);
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int result=0;
        int i=0;
        int ans=0;
        while(result<n/2){
            ans++;
            result+=freq[i];
            i++;
        }
        return ans;
    }
};