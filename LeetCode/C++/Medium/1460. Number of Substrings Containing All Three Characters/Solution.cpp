class Solution {
public:
    int numberOfSubstrings(string s) {
       int cnt =0;
       int lastseen[3]= {-1,-1,-1};
       for(int i =0; i<s.size(); i++){
        lastseen[s[i]-'a']=i;
        if(lastseen[0]>-1 && lastseen[1]>-1 && lastseen[2]> -1){
            cnt =  cnt 1 + min(lastseen[0],min(lastseen[1], lastseen[2]));

        }
        }
 return cnt;
    }
};
/*class Solution {
public:
    int numberOfSubstrings(string s) {
       int  cnt =0;
        for(int i =0 ;i<s.size();i++){
           int hash[3]={0};
           for (int j=i;j<s.size();j++){
            hash[s[j]-'a']++;
              if(hash[0]>0 && hash[1]>0 && hash[2]>0) {
              cnt = cnt + 1; // SLIGHT OPTIMIZATION -  getting valid str,after that idx all the strings are gonna be valid instead of chcking aain and generating str again we cnt = cnt+(n-j);
              }
           }
        }
        return cnt;
    }
};*/