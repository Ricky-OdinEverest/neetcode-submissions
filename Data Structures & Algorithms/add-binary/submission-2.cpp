class Solution {
public:
    string addBinary(string a, string b) {

        int loopSize = a.size() > b.size() ? a.size() : b.size();

         int carry = 0;

         string result = "";

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        for(int i = 0; i < loopSize; i++)
        {
            int digitA = i < a.length() ? a[i] - '0' : 0;
            int digitB = i < b.length() ? b[i] - '0' : 0;

            int sum = digitA + digitB + carry;

            char c = (sum % 2) + '0';

            result += c;

            carry = sum / 2;



        }
        
        if(carry)
        {
            result += '1';
        }
     reverse(result.begin(), result.end());
    return result;
        }    
};
    

