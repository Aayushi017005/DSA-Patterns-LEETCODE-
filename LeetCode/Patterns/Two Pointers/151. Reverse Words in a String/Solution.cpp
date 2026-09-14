class Solution {
public:
    string reverseWords(string s) {

        int n = s.length();
        string ans = "";

        // Reverse the complete string
        reverse(s.begin(), s.end());

        for(int i = 0; i < n; i++) {

            string word = "";

            // Collect one word
            while(i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the individual word
            reverse(word.begin(), word.end());

            // Add word to answer
            if(word.length() > 0) {
                ans += " " + word;
            }
        }

        // Remove the first extra space
        return ans.substr(1);
    }
};