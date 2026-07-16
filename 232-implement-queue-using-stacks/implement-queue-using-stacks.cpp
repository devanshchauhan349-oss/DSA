class MyQueue {
private:
    stack<int> in_stk;
    stack<int> out_stk;

    void transfer() {
        if (out_stk.empty()) {
            while (!in_stk.empty()) {
                out_stk.push(in_stk.top());
                in_stk.pop();
            }
        }
    }

public:
    MyQueue() {}
    
    void push(int x) {
        in_stk.push(x);
    }
    
    int pop() {
        transfer();
        int val = out_stk.top();
        out_stk.pop();
        return val;
    }
    
    int peek() {
        transfer();
        return out_stk.top();
    }
    
    bool empty() {
        return in_stk.empty() && out_stk.empty();
    }
};