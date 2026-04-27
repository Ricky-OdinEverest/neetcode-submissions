class MinStack {

public:
        vector<pair<int,int>> minS;
        int minVal;
    MinStack() {
        minVal = INT_MAX; 
    }
    
    void push(int val) {
        if(minS.size() == 0) minVal = val;
        else if(val < minVal)
        {
            minVal = val;
        }
        minS.push_back({val,minVal});
        
    }
    
    void pop() {
        if(minS.back().second == minVal)
        {
            minS.pop_back();
            minVal = minS.back().second;
        }
        else
        {
             minS.pop_back();
        }
       
    }
    
    int top() {
          return minS.back().first;
    }
    
    int getMin() {
        
        return minVal;
    }
};
