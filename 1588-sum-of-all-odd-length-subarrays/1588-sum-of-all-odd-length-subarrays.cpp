class Solution {
public:
    
    int sum=0;
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n= arr.size();
        for(int i=0;i<n;i++){
            int x=(i+1)*(n-i);
            sum+=((x+1)/2)*arr[i];
        }
        return sum;
    }
};