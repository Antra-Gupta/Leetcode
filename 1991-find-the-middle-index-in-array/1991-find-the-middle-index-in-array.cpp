class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int rightsum=0,leftsum=0;
        for(int i=0;i<n;i++){
            rightsum+=nums[i];
        }
        for(int i=0;i<n;i++){
            rightsum-=nums[i];
            if(leftsum==rightsum){
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;
    }
};