

class Solution {
public:
    static const int MOD = 1e9 + 7;

    struct Node {
        long long sum = 0;
        long long sqSum = 0;
        long long lazy = 0;
    };

    vector<Node> tree;
    int n;

    void apply(int node, int start, int end, long long val) {
        long long len = end - start + 1;

        tree[node].sqSum =
            (tree[node].sqSum + 2LL * val * tree[node].sum
             + len * val % MOD * val) % MOD;

        tree[node].sum =
            (tree[node].sum + len * val) % MOD;

        tree[node].lazy = (tree[node].lazy + val) % MOD;
    }

    void push(int node, int start, int end) {
        if (tree[node].lazy == 0 || start == end)
            return;

        int mid = (start + end) / 2;
        apply(node * 2, start, mid, tree[node].lazy);
        apply(node * 2 + 1, mid + 1, end, tree[node].lazy);

        tree[node].lazy = 0;
    }

    void update(int node, int start, int end,
                int l, int r, long long val) {
        if (start > r || end < l)
            return;

        if (l <= start && end <= r) {
            apply(node, start, end, val);
            return;
        }

        push(node, start, end);

        int mid = (start + end) / 2;

        update(node * 2, start, mid, l, r, val);
        update(node * 2 + 1, mid + 1, end, l, r, val);

        tree[node].sum =
            (tree[node * 2].sum + tree[node * 2 + 1].sum) % MOD;

        tree[node].sqSum =
            (tree[node * 2].sqSum + tree[node * 2 + 1].sqSum) % MOD;
    }

    int sumCounts(vector<int>& nums) {
        n = nums.size();
        tree.assign(4 * n, Node());

        vector<int> last(100001, -1);
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            int prev = last[x];

            // Add 1 to distinct counts of subarrays
            // ending at i, represented by start indices [prev+1, i].
            update(1, 0, n - 1, prev + 1, i, 1);

            // Sum of squares for all subarrays ending at i.
            ans = (ans + tree[1].sqSum) % MOD;

            last[x] = i;
        }

        return ans;
    }
};
