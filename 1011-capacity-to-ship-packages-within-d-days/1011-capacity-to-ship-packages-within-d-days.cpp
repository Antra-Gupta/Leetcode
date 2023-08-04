class Solution {
public:
    bool possibleDays(int maxAllowed,int days,vector<int> weights){
        int sum=0;
        int count=1;
        
        for(auto it:weights){
            if(it>maxAllowed){
                return false;
            }
            else if(sum+it>maxAllowed){
                sum=it;
                count++;
            }
            else{
                sum+=it;
            }
        } 
        if(count>days){
            return false;
        }
        return true;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=1;
        int high=0;
        for(auto it:weights)
        {
            high+=it;
        }
        int ans=high;
        while(low<=high){
            int mid=(low+high) >>1;
            if(possibleDays(mid,days,weights)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};