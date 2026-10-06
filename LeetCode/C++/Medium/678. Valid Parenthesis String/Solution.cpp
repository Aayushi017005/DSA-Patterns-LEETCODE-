class Solution {
public:
    bool checkValidString(string s) {
        int min =0 ; int max =0;

        for (int i =0; i<s.size();i++){
          // openeing bracket increase the range by +1;
          if ( s[i]=='('){
            min = min + 1;
            max = max + 1;
          }
          // closing bracket decrease the range by minus 1
          if(s[i] == ')'){
            min = min - 1;
            max = max - 1;
          }
          // if there is '*'
          if(s[i]== '*'){
            min = min-1;
            max = max+1;
          }
          if(min<0) min = 0;

          // when starts wih closing bracket then we don't able to maximise the range towards +ve hence it is -1 for ex- s =")" then mqax is always -1 thats why return false
          if(max<0) return false;

        }
        // return true if min is 0;
        return min==0; //It is a comparison, and a comparison itself produces a bool.
        // or we can write if else statement for true and false
        }
};