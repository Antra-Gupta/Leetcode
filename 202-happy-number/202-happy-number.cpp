class Solution {
public:
    bool isHappy(int n) {
        
        while(n!=1){
            int curr=0;
        while(n>0){
            curr+= pow((n%10),2);
            n=n/10;
        }
        n=curr;
        if(n==89){
            return false;
        }
        }
        return true;
    }
};