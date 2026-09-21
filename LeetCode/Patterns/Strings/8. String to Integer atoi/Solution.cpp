class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int n = s.length();

        // Skip spaces
        while(i < n && s[i] == ' ') {
            i++;
        }

        // Sign
        int sign = 1;

        if(i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < n && s[i] == '+') {
            i++;
        }

        // Make number
        long long num = 0;

        while(i < n && s[i] >= '0' && s[i] <= '9') {

            num = num * 10 + (s[i] - '0');

            // Check range
            if(sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }

            if(sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * num;
    }
};