class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> freq;

        // Count frequency
        for(char ch : s) {
            freq[ch]++;
        }

        // Store characters
        vector<pair<char, int>> arr;

        for(auto it : freq) {
            arr.push_back({it.first, it.second});
        }

        // Sort by frequency decreasing
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Build answer
        string ans = "";

        for(auto it : arr) {
            ans += string(it.second, it.first);
        }

        return ans;
    }
};