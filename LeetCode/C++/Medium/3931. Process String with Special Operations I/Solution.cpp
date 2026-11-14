
class Solution {
public:
    string processStr(string s) {
        vector<char> res;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '%') {
                reverse(res.begin(), res.end());
            }

            else if(s[i] == '*') {
                if(!res.empty())
                    res.pop_back();
            }

            else if(s[i] == '#') {
                int n = res.size();

                for(int j = 0; j < n; j++) {
                    res.push_back(res[j]);
                }
            }

            else {
                res.push_back(s[i]);
            }
        }

        string ans = "";

        for(int i = 0; i < res.size(); i++) {
            ans += res[i];
        }

        return ans;
    }
};
