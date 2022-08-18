class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int diff=0;
        char prev,aft;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                
                if(diff==1){
                if(s2[i]!=prev || s1[i]!=aft){
                       return false; 
                    }
                }
                diff++;
                prev=s1[i];
                aft=s2[i]; 
            }
        }
        return (diff==0|| diff==2)?true:false;
    }
};