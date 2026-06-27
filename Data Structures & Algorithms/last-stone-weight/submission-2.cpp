class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> stk(stones.begin(), stones.end());


         int n = stones.size();
         while(!stk.empty() && stk.size() > 1)
         {
            int x = stk.top(); stk.pop();
            int y =  stk.top(); stk.pop();

            if(x == y) continue;
            else
            {
              int big = max(x,y);
              int small = min(x,y);

              int pebble = big - small;

              stk.push(pebble);
            }


         }

         return !stk.empty()?stk.top():0;
        
    }
};
