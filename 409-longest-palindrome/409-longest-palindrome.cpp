class Solution {
public:

    int longestPalindrome(string s) {
        int ans=0;
        int extra=0;
        int n=s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            
                ans+=(i.second)-(i.second%2);
          
            if(i.second%2==1){
                extra=1;
            }
        }
        return ans+extra;
        
    }
};