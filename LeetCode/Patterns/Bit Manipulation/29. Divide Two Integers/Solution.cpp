class Solution {
public:
    int divide(int dividend, int divisor) {
        // Edge case
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);
        long long result = 0;  // ✅ changed to long long

        while(dvd >= dvs) {
            long long temp = dvs, multiple = 1;

            while(dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            result += multiple;
        }

        // Apply sign safely
        if((dividend < 0) ^ (divisor < 0))
            result = -result;

        return (int)result;  // cast back
    }
};