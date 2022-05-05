class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        
    }
    
    int pop() {
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int k = q1.front();
        
        q1.pop();
        
       q2.swap(q1);
        return k;
        
    }
    
    int top() {
        
        q2=q1;
        int k;
        while(q2.size()>0)
        {
           k = q2.front();
           q2.pop();
        }
        return k;
    }
    
    bool empty() {
        return q1.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */