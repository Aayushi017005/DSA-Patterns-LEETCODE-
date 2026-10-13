class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0, r = 0;
        int minlen = 1e9, cnt = 0, srtidx = -1;
        int hash[256] = {0};

        for (int i = 0; i < t.size(); i++) {
            hash[t[i]]++;
        }

        while (r < s.size()) {
            if (hash[s[r]] > 0) {
                cnt++;
            }
            hash[s[r]]--;

            while (cnt == t.size()) {
                if (r - l + 1 < minlen) {
                    minlen = r - l + 1;
                    srtidx = l;
                }

                hash[s[l]]++;
                if (hash[s[l]] > 0) {
                    cnt--;
                }
                l++;
            }

            r++;
        }

        if (srtidx == -1) return "";
        return s.substr(srtidx, minlen);
    }
};

/*
class Solution {
public:
    string minWindow(string s, string t) {
        int stidx = -1, minlen = 1e9;

        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> ts;
            int cnt = 0;

            for (int j = 0; j < t.size(); j++) {
                ts[t[j]]++;
            }

            for (int j = i; j < s.size(); j++) {
                if (ts[s[j]] > 0) {
                    cnt++;
                }
                ts[s[j]]--;

                if (cnt == t.size()) {
                    if (j - i + 1 < minlen) {
                        minlen = j - i + 1;
                        stidx = i;
                    }
                    break;
                }
            }
        }

        if (stidx == -1) return "";
        return s.substr(stidx, minlen);
    }
};*/