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
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(begin(s), end(s));
        sort(t.begin(), t.end());
        if(t==s)
        return true;

      return false;
    }
};