class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> stk;
        for(auto op : operations)
        {
            if(op == "+")
            {
                int top = stk.top();
                stk.pop();
                int top2 = top + stk.top();
                stk.push(top);
                stk.push(top2);
            }
            else if(op == "D")
            {
                stk.push(stk.top() * 2);
            }
            else if(op == "C")
            {
                
                stk.pop();  
            }
            else
            {
                stk.push(stoi(op));
            }
        }

        int sum = 0;
        while (!stk.empty()) {
            sum += stk.top();
        stk.pop();
        }       

        return sum;
    }
};