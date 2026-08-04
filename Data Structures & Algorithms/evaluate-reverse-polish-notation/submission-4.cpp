class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        unordered_set<string> opSet{"+","*","-","/"};

        stack<int> numStack;

        for(auto& item: tokens)
        {
            if (isdigit(item[0]) || (item[0] == '-' &&  item.size() > 1))
            {
                int num = std::stoi(item);
                numStack.push(num);
            }
            else
            {
                int b = numStack.top(); numStack.pop();
                int a = numStack.top(); numStack.pop();
                int newNum;
                switch(item[0]) 
                {
                case '+':
                newNum = a + b;
                break;
                case '*':
                newNum = a * b;
                break;
                case '-':
                newNum = a - b;
                break;
                case '/':
                newNum = a / b;
                break;
                default:
                cout << "Invalid data";
                }

                numStack.push(newNum);
                
            }
        }
        return numStack.top();
    }
};
