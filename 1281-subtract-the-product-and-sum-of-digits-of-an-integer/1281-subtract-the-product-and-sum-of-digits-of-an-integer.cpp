class Solution {
public:
    int subtractProductAndSum(int n) {
        int arr[6];
        int k=0;
        while(n!=0){
            arr[k]=n%10;
            k++;
            n/=10;
        }
        int pro=1,sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
            pro*=arr[i];
        }
        return (pro-sum);
    }
};