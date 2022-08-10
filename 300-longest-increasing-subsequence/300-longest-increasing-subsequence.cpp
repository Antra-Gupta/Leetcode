class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        int m=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i])
                    ans[j]=max(ans[i]+1,ans[j]);
            }
              m=max(m,ans[i]);
        }
        return m;
    }
};