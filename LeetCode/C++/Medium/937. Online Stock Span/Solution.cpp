class StockSpanner {
public:
vector<int>arr;
    StockSpanner() {
           
    }
    
    int next(int price) {
int currspan=1;
arr.push_back(price);
 for(int i=arr.size()-2;i>=0;i--){
    if(arr[i]<=price){
     currspan++;
    }
   
    else{
        break;
    }
 }
        return currspan;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */