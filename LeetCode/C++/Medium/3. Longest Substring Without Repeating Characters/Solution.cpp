class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int maxlen = 0; in len =  l-r+1;
        unordered_map<char, int> hash;

        while (r < s.size()) {
            if (hash.find(s[r]) != hash.end() && hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }

            hash[s[r]] = r;
            maxlen = max(maxlen, len);
            r++;
        }

        return maxlen;
    }
};
/*class Solution {
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
};*/