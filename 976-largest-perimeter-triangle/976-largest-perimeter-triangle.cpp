class Solution {
public:
    int largestPerimeter(vector<int>& arr) {
        int n = arr.size();
  
    sort(arr.begin(),arr.end());
        for(int i=n-1;i>=2;i--){
            cout<<arr[i]<<" "<<arr[i-1]<<" "<<arr[i-2];
            if(arr[i]<arr[i-1]+arr[i-2]){
                return arr[i]+arr[i-1]+arr[i-2];
            }
        }
      return 0; 
    }
};