class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {

        int m = coins.size();
        int n = coins[0].size();

        const long long NEG = -1e18;

        // dp[i][j][k] = maximum profit at (i,j)
        // after using k neutralizations
        vector<vector<vector<long long>>> dp(
            m, vector<vector<long long>>(n, vector<long long>(3, NEG))
        );

        // Starting cell
        dp[0][0][0] = coins[0][0];

        if (coins[0][0] < 0) {
            dp[0][0][1] = 0;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (i == 0 && j == 0)
                    continue;

                for (int k = 0; k <= 2; k++) {

                    // Come from top
                    if (i > 0 && dp[i - 1][j][k] != NEG) {
                        dp[i][j][k] = max(
                            dp[i][j][k],
                            dp[i - 1][j][k] + coins[i][j]
                        );
                    }

                    // Come from left
                    if (j > 0 && dp[i][j - 1][k] != NEG) {
                        dp[i][j][k] = max(
                            dp[i][j][k],
                            dp[i][j - 1][k] + coins[i][j]
                        );
                    }

                    // Neutralize current robber
                    if (coins[i][j] < 0 && k > 0) {

                        // From top
                        if (i > 0 && dp[i - 1][j][k - 1] != NEG) {
                            dp[i][j][k] = max(
                                dp[i][j][k],
                                dp[i - 1][j][k - 1]
                            );
                        }

                        // From left
                        if (j > 0 && dp[i][j - 1][k - 1] != NEG) {
                            dp[i][j][k] = max(
                                dp[i][j][k],
                                dp[i][j - 1][k - 1]
                            );
                        }
                    }
                }
            }
        }

        return max({
            dp[m - 1][n - 1][0],
            dp[m - 1][n - 1][1],
            dp[m - 1][n - 1][2]
        });
    }
};