class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int dest=0;
        for(int i=0;i<n;i++){
            if(i>dest){
                return false;
            }
            dest=max(dest,i+nums[i]);
        }
        return true;
    }
};