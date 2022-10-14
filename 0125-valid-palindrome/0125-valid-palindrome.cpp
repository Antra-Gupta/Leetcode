class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string orig="";
        for(int i=0;i<n;i++){
            if((s[i]>=48 &&s[i]<=57) ||(s[i]>=65&&s[i]<=90)||(s[i]>=97 &&s[i]<=122)){
                orig+=tolower(s[i]);
            }
        }

        string neww="";
        for(int i=orig.length()-1;i>=0;i--){
            neww+=orig[i];
        }
         // cout<<orig<<" "<<neww;
        if(orig==neww){
            return true;
        }
        else{
            return false;
        }
    }
};