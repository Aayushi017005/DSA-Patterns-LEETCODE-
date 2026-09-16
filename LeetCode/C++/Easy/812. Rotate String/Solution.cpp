// for optimal approach keep one thing in mind-
// if we concatenate a string with itself,it will contain all rotation as a substring in it.
// in this approach concatenation is used and we have to find our goal in concatenatinated string.

class Solution {
public:
    bool rotateString(string s, string goal) {
  int m = s.length();
  int n = goal.length();

  if(m!=n) 
  return false;
  // concatenation of string s= "abc" then s= "abcabc" now find goal and all possible combination of this str we ca get get it if length is equal.
 string concatenationSTR = s+s;
 if(concatenationSTR.find(goal) != str::npos){ // npos means no position or not found instead of returning -1, and (!= str::npos )means->true 
 return true;
 }
     return false;   
    }
};


/*BRUTE FORCE APPROACH
class Solution {
public:
    bool rotateString(string s, string goal) {
      int m = s.length() ;
      int n = goal.length() ;

      if(m!=n){
        return false;
      }
      for (int count=1; count<=m; count++){
          rotate(s.begin(), s.begin()+1, s.end());

          if(s==goal) 
          return true;
      }
      return false;
    }
};*/