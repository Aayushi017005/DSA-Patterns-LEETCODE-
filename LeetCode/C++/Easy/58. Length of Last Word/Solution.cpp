class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int len = 0;

        int i = n - 1;

        // Step 1: skip trailing spaces
        while(i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: count last word
        while(i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};