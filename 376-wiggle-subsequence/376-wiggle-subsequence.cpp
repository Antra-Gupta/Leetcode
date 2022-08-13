class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
       int n=nums.size();
        int neg=1;
        int pos=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                pos=1+neg;
            }
            else if(nums[i]<nums[i-1]){
                neg=pos+1;
            }
        }
        return max(neg,pos);
    }
};