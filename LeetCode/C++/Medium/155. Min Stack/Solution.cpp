class MinStack {
public:
stack<long long >st; long long min =LLONG_MAX;
    MinStack() {
        
    }
    
    void push(int x) {
        long long a = x;
if(st.empty()){
    
    min = a;
    st.push(a);
}
else if(a>min) st.push(a);
else{
    st.push(2*a-min);
    min= a;
}
        
    }
    
    void pop() {
        if(st.empty()) return;
        long long  ans= st.top();
         st.pop();
         if(ans<min){
            min= 2*(min)-ans;
        }
        
    }
    
    int top() {
        if(st.empty()) return -1;
        long long ans = st.top();
        if(ans>min) return ans;
        else return min;
        
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */