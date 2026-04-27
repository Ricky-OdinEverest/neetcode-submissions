class Solution {
public:
    bool confusingNumber(int n) {

        if(n == 0) return false;

        string temp = to_string(n);
        unordered_set<char> invalidSet;
        invalidSet.insert('2');
        invalidSet.insert('3');
        invalidSet.insert('4');
        invalidSet.insert('5');
        invalidSet.insert('7'); 

        unordered_map<char, char> valid_map =
        {
            {'0','0'},
            {'1','1'},
            {'6','9'},
            {'8','8'},
            {'9','6'}
        };
        //int places = (int)log10(std::abs(n)) + 1;
        //int temp = n;
        string newNum = "";
        int R = temp.length() - 1;
        for(int i = R; i >= 0; i--)
        {
                
            if(invalidSet.find(temp[i]) != invalidSet.end())
            {
                return false;
            }
            
            newNum += valid_map[temp[i]];
        }

        return stoi(newNum) != n;
        
    }
};
