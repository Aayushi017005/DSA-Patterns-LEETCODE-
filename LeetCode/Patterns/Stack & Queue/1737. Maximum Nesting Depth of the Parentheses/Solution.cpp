class Solution {
public:
    int maxDepth(string s) {
        int Maxcount = 0;
   int ans=0;
    for(int i =0;i<s.size();i++){
        if(s[i]=='('){
         Maxcount++;
        ans = max(ans,Maxcount);
        }
    if(s[i]==')'){
        Maxcount--;
    }
    }
    return  ans;
    }
    
};