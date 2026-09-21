class Solution {
public:
    class Solution {
public:

    string expandAroundCenter(string s, int low, int high) {

        while(low >= 0 && high < s.size() && s[low] == s[high]) {
            low--;
            high++;
        }

        int start = low + 1;
        int length = high - low - 1;

        return s.substr(start, length);
    }


    string longestPalindrome(string s) {

        string ans = "";

        for(int i = 0; i < s.size(); i++) {

            // Check odd length palindrome
            string odd = expandAroundCenter(s, i, i);

            if(odd.length() > ans.length()) {
                ans = odd;
            }


            // Check even length palindrome
            string even = expandAroundCenter(s, i, i + 1);

            if(even.length() > ans.length()) {
                ans = even;
            }
        }

        return ans;
    }
};
  