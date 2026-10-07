class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {

            map<char, int> mp [256] = [0];

            for(int j = i; j < n; j++) {

                if(mp[s[j]] == 1) {
                    break;
                }

                mp[s[j]] = 1;

                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};