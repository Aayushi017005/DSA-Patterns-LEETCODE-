class Solution {
public:

    vector<int> findNSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if(st.empty())
                ans[i] = n;
            else
                ans[i] = st.top();

            st.push(i);
        }

        return ans;
    }


    vector<int> findPSEE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i = 0; i < n; i++) {

            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            if(st.empty())
                ans[i] = -1;
            else
                ans[i] = st.top();

            st.push(i);
        }

        return ans;
    }


    int sumSubarrayMins(vector<int>& arr) {

        vector<int> nse = findNSE(arr);
        vector<int> psee = findPSEE(arr);

        long long total = 0;
        int mod = 1e9 + 7;

        for(int i = 0; i < arr.size(); i++) {

            long long left = i - psee[i];
            long long right = nse[i] - i;

            total = (total + left * right * arr[i]) % mod;
        }

        return total;
    }
};