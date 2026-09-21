
class Solution {
public:
    int myAtoi(string s) {

        int num = 0;
        int n = s.length();

        int i = 0;

        // Skip leading spaces
        while(i < n && s[i] == ' ') {
            i++;
        }

        // Check sign
        int sign = 1;

        if(i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < n && s[i] == '+') {
            i++;
        }

        // Read digits
        while(i < n && s[i] >= '0' && s[i] <= '9') {

            num = num * 10 + (s[i] - '0');

            i++;
        }

        return num * sign;
    }
};