class Solution {
public:
        
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> a;
        for(string i : wordDict){
            a.insert(i);
        }
        int n=s.size();
        bool dp[n+1];
        dp[n]=true;
        for(int i=n-1;i>=0;--i){
            string temp;
            for(int j=i;j< n;++j){
                temp+=s[j];
                if(dp[i]=a.count(temp)&&dp[j+1]){
                    break;
                }
            }
        }
        return dp[0];
    }
};