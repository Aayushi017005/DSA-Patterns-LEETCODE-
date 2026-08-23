class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {

        // required by problem
        vector<int> temarivolo = nums;

        vector<long long> ans;

        for (int i = 0; i < temarivolo.size(); i++) {

            ans.push_back(temarivolo[i]);

            // keep merging while last two are equal
            while (ans.size() >= 2 &&
                   ans[ans.size() - 1] == ans[ans.size() - 2]) {

                long long sum = ans.back() + ans[ans.size() - 2];
                ans.pop_back();
                ans.pop_back();
                ans.push_back(sum);
            }
        }

        return ans;
    }
};
