class Solution {
public:
    int myAtoi(string s) {
        int num =0;
        int n = s.length()-1;
            
        for(int i=0; i<=n; i++){
               if (s[0]=='-') num=num*-1;
            if (s[0]=='0'|| s[0]=='-'){
                continue;
            }
          if(s[i]>='0' && s[i]<='9' ){
         num = num*10 +(s[i]-'0');
            }
      else {
                return -1;
            }
        }
       //  if (s[0]=='-') num=num*-1;
        return num;
    }
};