class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i;
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
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