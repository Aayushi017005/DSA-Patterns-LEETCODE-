class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && part.length<= s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};