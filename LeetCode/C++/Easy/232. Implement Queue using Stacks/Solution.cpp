class MyQueue {
    stack<int>s1;
    stack<int>s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){ // while(s1.size()>0)
            s2.push(s1.top());
            s1.pop();
        }
          s1.push(x);
         while(!s2.empty()){ // while(s2.size()>0)
          s1.push(s2.top());
          s2.pop();}
        
    }
    
    int pop() {
       int ans = s1.top();
       s1.pop();
       return ans;
    }
    
    int peek() {
     int x= s1.top();
     return x;
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */