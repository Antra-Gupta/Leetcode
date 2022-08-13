class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(105);
        dp[0]=1;
        dp[1]=(s[0]=='0')?0:1;
        for(int i=2;i<=n;i++){
            int a=s[i-1]-'0';
            int aa=10*(s[i-2]-'0')+(s[i-1]-'0');
            if(a>=1){
                dp[i]+=dp[i-1];
            }
            if(aa>=10&&aa<=26){
                dp[i]+=dp[i-2];
            }
        }
        return dp[n];
    }
};