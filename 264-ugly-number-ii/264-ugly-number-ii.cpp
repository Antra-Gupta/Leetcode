class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1){
            return 1;
        }
        vector<int> ans(n);
        ans[0]=1;
        int l2=0,l3=0,l5=0;
        for(int i=1;i<n;i++){
            ans[i]=min(ans[l2]*2,min(ans[l3]*3,ans[l5]*5));
            if(ans[i]==ans[l2]*2)
                l2++;
            if(ans[i]==ans[l3]*3)
                l3++;
            if(ans[i]==ans[l5]*5)
                l5++;
        }
        return ans[n-1];  
    }
};