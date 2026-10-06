class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt = 0;       // unmatched '('
        int add = 0;       // brackets we need to add
        int i = 0;

        while(i < s.size()) {

            if(i + 1 < s.size() && s[i] == '(' && s[i + 1] == ')') {
                i = i + 2;          // () → cancel
            }
            else {
                if(s[i] == '(') {
                    cnt++;
                }
                else {
                    if(cnt > 0) {
                        cnt--;       // match an existing '('
                    }
                    else {
                        add++;       // need to add '('
                    }
                }

                i++;
            }
        }

        return add + cnt;
    }
};