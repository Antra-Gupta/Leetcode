class Solution {
public:
    double average(vector<int>& salary) {
        double ans;
        int maxi=INT_MIN,mini=INT_MAX,sum=0;
        int n=salary.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,salary[i]);
            mini=min(mini,salary[i]);
            sum+=salary[i];
        }
        ans=(double)(sum-mini-maxi)/(n-2);
        return ans;
    }
};