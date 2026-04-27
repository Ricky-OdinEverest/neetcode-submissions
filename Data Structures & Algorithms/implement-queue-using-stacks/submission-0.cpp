class MyQueue {
public:

        stack<int> stkA;
        stack<int> stkB;
    MyQueue() {

        
    }
    
    void push(int x) {

        stkA.push(x);
        
    }
    
    int pop() {
        
        while(!stkA.empty())
        {
            int temp = stkA.top();
            stkA.pop();
            stkB.push(temp);
        }

        int res = stkB.top();
        stkB.pop();
        while(!stkB.empty())
        {
            int temp = stkB.top();
            stkB.pop();
            stkA.push(temp);
        }

        return res;
    }
    
    int peek() {

        while(!stkA.empty())
        {
            int temp = stkA.top();
            stkA.pop();
            stkB.push(temp);
        }

        int res = stkB.top();
        

        while(!stkB.empty())
        {
            int temp = stkB.top();
            stkB.pop();
            stkA.push(temp);
        }

        return res;
        
    }
    
    bool empty() {

        return stkA.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */