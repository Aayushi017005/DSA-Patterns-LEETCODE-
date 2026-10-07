class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int freq[256] = {0};

            for(int j = i; j < n; j++) {

                if(freq[s[j]] == 1) {
                    break;
                }

                freq[s[j]] = 1;

                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};