class Solution {
public:
    bool helper(string s, string t){
        vector<char> check(128,-1);
        int n=s.size();
        for(int i=0;i<n;i++){
            char temp=s[i];
            // cout<<temp<<" ";
            if(check[temp]==-1){
            check[temp]=t[i];
             cout<<check[temp]<<" "<<t[i];
            }
            else if(check[temp]!=t[i]){
                return false;
            }
            // cout<<endl;
        }
         
          return true;
    }
    bool isIsomorphic(string s, string t) {
        
      return( helper(s,t)&& helper(t,s));
    }
};