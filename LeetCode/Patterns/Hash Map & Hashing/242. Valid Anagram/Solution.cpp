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