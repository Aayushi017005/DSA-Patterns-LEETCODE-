class Solution {
public:
    int distinctSubseqII(string s) {
        const long long MOD = 1000000007;

        long long dp = 1;  // empty subsequence

        vector<long long> last(26, 0);

        for (char c : s) {
            int idx = c - 'a';

            long long newdp = (2 * dp - last[idx] + MOD) % MOD;

            last[idx] = dp;
            dp = newdp;
        }

        // remove empty subsequence
        return (dp - 1 + MOD) % MOD;
    }
};