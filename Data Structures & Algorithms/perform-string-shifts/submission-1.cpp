class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift)
    {
        int right = 0;
        int left = 0;
        int size = s.length();
        string newString = "";

        for(auto pairs : shift)
        {
            if(pairs[0] == 0)
            {
                left += pairs[1];
            }
            else
            {
                right += pairs[1];
            }

        }

        if(right == left) return s;
        else if(right > left)
        {
            int rightShift = (right - left) % size;

            for(int i = size - rightShift; i < size; i++)
            {
                newString += s[i];
            }
            for(int i = 0; i < size - rightShift ; i++)
            {
                newString += s[i];
            }
        }
        else
        {
            int leftShift = (left - right) % size;

            for(int i = leftShift; i < size; i++)
            {
                newString += s[i];
            }
            for(int i = 0; i < leftShift; i++)
            {
                newString += s[i];
            }
        }

        return newString;
        
    }
};
