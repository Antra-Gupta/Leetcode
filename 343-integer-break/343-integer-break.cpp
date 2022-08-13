class Solution {
public:

    int integerBreak(int n) {
        vector <int> dp(n+1);
        dp[2]=1;
        for(int i=3;i<=n;i++){
            dp[i]=0;
            for(int j=1;j<=i/2;j++){
                int temp=i-j;
                int m=max(temp*j,j*dp[temp]);
                dp[i]=max(dp[i],m);
            }
        }
        return dp[n];

    }
};