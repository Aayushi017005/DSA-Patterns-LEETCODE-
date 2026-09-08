class StockSpanner {
public:
stack<int>st;
vector<int>prices;
    StockSpanner() {
        
    }
    
    int next(int price) {
        //int span=0;
        int index=0;
        while(!st.empty()&& prices[st.top()]<=price){
            st.pop();
        }
        int pge;
        if(st.empty()){
            pge=-1;
        }
        else{
            pge=st.top();
        }
        int span= index-pge;
        index++;
        //storing span and index to calculate the consecutive days;
        st.push(index);
        prices.push_back(index);
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */