class Solution {
public:
    bool isPalindrome(int x) {
         // Step 1: edge cases
        if(x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversed = 0;

        while(x > reversed) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // Step 2: check
        return (x == reversed || x == reversed / 10);
    }
};