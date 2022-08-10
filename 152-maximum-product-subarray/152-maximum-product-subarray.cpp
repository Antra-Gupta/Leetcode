class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN, maxi = 1, mini = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0)
            { 
                int temp = maxi; 
                maxi = mini; 
                mini = temp;
            }
            maxi = max(maxi*nums[i], nums[i]);
            mini = min(mini*nums[i], nums[i]);
            
            ans = max(ans, maxi);
        }
        return ans;
    }
};