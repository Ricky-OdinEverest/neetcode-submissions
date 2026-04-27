class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char , int> availableLetters;

        for(auto c : magazine)
        {
            availableLetters[c]++;
        }

        unordered_map<char , int> neededLetters;
        for(auto c : ransomNote)
        {
            if(availableLetters.find(c) != availableLetters.end())
            {
                neededLetters[c]++;
                if(neededLetters[c] >  availableLetters[c]) return false;
            }
            else
            {
                return false;
            }
            
        }

        return true;
        
    }
};