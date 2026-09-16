/*
optimal approach is to store the frequenct or count in an array of size 26 since it is mentioned in constraints that there are only small alphabets available which are only 26 so we declared 26 size array to store the freq of s and when t finds the freq of the alphabets exist exist in array that turned out be 0 by -- and when all fre fer  becomes 0 this menas that str t have all same char as of str s then we return true else false.
another method was also there that is using unordered map 
--Time Comp -> o(n) and space comp-> o(26)*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

int freq[26] ;
for (int i =0; i<s.length();i++){
    freq[s[i] - 'a']++;
    freq[t[i] - 'a']--;
}
     for(int i=0;i<26;i++){
        if(freq[i] != 0) return false;
     }
     return true;
    }
};

//BRUTE FORCE APPROACH
// anagram means->
/*Same length → same number of characters.
Same characters with the same frequencies → order/position does not matter.*/
// so we sort both the str and sort we checked whether both are equalor not if yes  return true else false. 
//Time comp-> o(nlogn) and space comp- o(1)
/*class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(begin(s), end(s));
        sort(t.begin(), t.end());
        if(t==s)
        return true;

      return false;
    }
};*/