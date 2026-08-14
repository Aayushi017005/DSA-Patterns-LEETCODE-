class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();

        // Step 1: skip spaces
        while(i < n && s[i] == ' ') i++;

        // Step 2: sign
        int sign = 1;
        if(i < n && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-') sign = -1;
            i++;
        }

        // Step 3: process digits
        int result = 0;

        while(i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Step 4: overflow check
            if(result > INT_MAX / 10 || 
              (result == INT_MAX / 10 && digit > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign;
    }
};