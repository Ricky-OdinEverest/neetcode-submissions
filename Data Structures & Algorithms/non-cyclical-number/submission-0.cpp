class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> numSet;
        int newSum = n;

        while(newSum != 1)
        {
            int places = (newSum == 0) ? 1 : (int)log10(abs(newSum)) + 1;
            int tempSum = 0;
            for(int i = 0; i < places; i++)
            {
                
                int digit = newSum % 10;
                tempSum += (digit * digit);
                newSum /= 10;
            }

            newSum = tempSum;

            if(numSet.find(newSum) != numSet.end())
            {
                return false;
            }
            numSet.insert(newSum);
            if(newSum == 1) return true;

        }

        return true;
        
    }
};
