class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sorting the whole array so that string arranged in sorted alphabetical order
        //{ flight, flow, flower}
        sort(strs.begin(),strs.end());

        string str1= strs[0];
        string strLast = strs[strs.size()-1];
         int i = 0;
        while(i<str1.length() && i<strLast.length() && str1[i]==strLast[i]){
            i++;
        }
          return str1.substr(0,i);
    }
};







/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
       // traverse the character of 1st string
        for(int i =0; i< strs[0].length();i++){
             char ch = strs[0][i];
        // compare with every other string
          for(int j=1 ; j<strs.size();j++){

            // checking if string is shorter OR character doesn't match
            if(i>strs[j].length() || strs[j][i]!=ch){
                return ans;
            }
          }
             // stores Character that was matched in all strings
                ans+= ch;
        }
        return ans;
    }
};*/

/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for(int i = 1; i < strs.size(); i++) {
            while(strs[i].find(prefix) != 0) {
                prefix.pop_back();
                if(prefix.empty()) return "";
            }
        }

        return prefix;
    }
};*/