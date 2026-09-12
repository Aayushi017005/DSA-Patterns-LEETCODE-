class StockSpanner {
public:
    stack<pair<int,int>>st;
    int index = 0;

    int next(int price) {

        while (!st.empty() && st.top.first() <= price) {
            st.pop();
        }

        int pge = st.empty() ? -1 : st.top.second();

        int span = index - pge;

        st.push{(index,price)};
        index++;

        return span;
    }
};