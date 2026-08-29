class Solution {
public:
    vector<pair<int,int>> robot;
    vector<int> walls;
    vector<vector<int>> dp;

    int solve(int i, int nextDir) {

        if (i < 0)
            return 0;

        if (dp[i][nextDir] != -1)
            return dp[i][nextDir];

        int pos = robot[i].first;
        int dist = robot[i].second;

        // -------------------------
        // Current robot shoots LEFT
        // -------------------------

        int left = pos - dist;

        // Previous robot blocks the bullet
        if (i > 0) {
            left = max(left, robot[i - 1].first + 1);
        }

        int l = lower_bound(walls.begin(), walls.end(), left)
                - walls.begin();

        int r = lower_bound(walls.begin(), walls.end(), pos + 1)
                - walls.begin();

        int leftWalls = r - l;

        int optionLeft =
            solve(i - 1, 0) + leftWalls;


        // -------------------------
        // Current robot shoots RIGHT
        // -------------------------

        int right = pos + dist;

        if (i + 1 < robot.size()) {

            if (nextDir == 0) {
                // Next robot shoots LEFT.
                // Its bullet comes toward current robot.
                right = min(
                    right,
                    robot[i + 1].first -
                    robot[i + 1].second - 1
                );
            }
            else {
                // Next robot shoots RIGHT.
                right = min(
                    right,
                    robot[i + 1].first - 1
                );
            }
        }

        l = lower_bound(walls.begin(), walls.end(), pos)
            - walls.begin();

        r = lower_bound(walls.begin(), walls.end(), right + 1)
            - walls.begin();

        int rightWalls = r - l;

        int optionRight =
            solve(i - 1, 1) + rightWalls;


        return dp[i][nextDir] =
            max(optionLeft, optionRight);
    }


    int maxWalls(vector<int>& robots,
                 vector<int>& distance,
                 vector<int>& wallPositions) {

        int n = robots.size();

        robot.resize(n);

        for (int i = 0; i < n; i++) {
            robot[i] = {robots[i], distance[i]};
        }

        sort(robot.begin(), robot.end());

        walls = wallPositions;
        sort(walls.begin(), walls.end());

        dp.assign(n, vector<int>(2, -1));

        return solve(n - 1, 1);
    }
};