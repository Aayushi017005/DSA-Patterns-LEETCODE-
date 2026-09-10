class StockSpanner {
public:
    vector<int> prices;
    stack<int> st;
    int index = 0;

    int next(int price) {

        while (!st.empty() && prices[st.top()] <= price) {
            st.pop();
        }

        int pge = st.empty() ? -1 : st.top();

        int span = index - pge;

        prices.push_back(price);
        st.push(index);
        index++;

        return span;
    }
};