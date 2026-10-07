class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n = s.size();
        long long ans = 0;

        for(int i = 0; i < n; i++) {

            map<char, long long> mp ;

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