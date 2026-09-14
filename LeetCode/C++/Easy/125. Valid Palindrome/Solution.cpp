class Solution {
public:
     bool isAlphanumeric(char ch){
       if((tolower(ch)>='a' && tolower(ch)<='z') || (ch>='0' && ch<='9') ){
        return true;
       }
       return false;
     }
    bool isPalindrome(string s) {
        int start=0 ; int end = s.length()-1;

        while(start<end){
            if(!isAlphanumeric(s[start])){
                start++; continue;
            }
            if(!isAlphanumeric(s[end])){
                end--; continue;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++; end--;
        }
        return true;
    }
};