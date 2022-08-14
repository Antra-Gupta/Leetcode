class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0;i<ransomNote.size();i++){
            int t=magazine.find(ransomNote[i]);
            // cout<<t;
            if(t!=-1){
                magazine[t]='0';
            }
            else{
                return false;
            }
        }
        return true;
    }
};