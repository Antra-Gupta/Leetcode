class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int cur=0,sum=0;
        if(n<3){
            return 0;
        }
        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                cur+=1;
                sum+=cur;
            }
            else{
                cur=0;
            }
        }
        return sum;
    }
};