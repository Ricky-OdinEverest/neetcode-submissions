class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while(left < s.size() && right > -1)
        {
        

        if (!isalnum(s[left]))
         {
            left++;
         }
        if (!isalnum(s[right]))
         {
            right--;
         }
         if (((isalnum(s[left])) && isalnum(s[right]) ))
         {
            if( tolower(s[left]) == tolower(s[right]))
            {
                 left++;
                 right--;
                continue;
            }
            else
            {
                return false;
            } 
         }
         

        }

        return true;
        
    }
};
