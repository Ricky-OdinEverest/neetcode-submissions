class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        int temp = digits[n] + 1;
        if(temp < 10)
        {
            digits[n] = temp;
            return digits;
        }
        else
        {
            if(digits.size() == 1)
            {
                digits[0] = 1;
                digits.push_back(0);
                return digits;
                
            }
            digits[n] = temp % 10;
            temp /= 10;
        for(int i = n - 1; i >= 0; --i)
        {
            temp += digits[i];

            if(temp >= 10)
            {
                if(i == 0)
                {
                    digits[i] = 1;
                    digits.push_back(0);
                    return digits;
                }
                int newNum = temp % 10;
                digits[i] = newNum;
                temp /= 10;
            }
            else
            {
                digits[i] = temp;
                return digits;
            }
            

        }
        
        }

        return digits;

    }
};
