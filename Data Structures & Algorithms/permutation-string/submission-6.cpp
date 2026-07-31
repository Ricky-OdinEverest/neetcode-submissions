class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;

        vector<int> s1Count(26, 0);
        vector<int> windowCount(26, 0);

        int n1 = s1.length();
        int n2 = s2.length();

        for(int i = 0; i < n1; i++)
        {
            s1Count[s1[i] - 'a']++;
            windowCount[s2[i] - 'a']++;
        }

        int matches = 0;
        for (int i = 0; i < 26; i++) {
            if (s1Count[i] == windowCount[i]) {
                matches++;
            }
        }

        for(int i = 0; i <= n2 - n1; i++)
        {
           if (matches == 26) return true; 

           if(i + n1 < n2)
           {

            int index = s2[i + n1] - 'a';
            windowCount[index]++;
            if (s1Count[index] == windowCount[index]) {
                matches++;
            } else if (s1Count[index] + 1 == windowCount[index]) {
                matches--;
            }

            index = s2[i] - 'a';
            windowCount[index]--;
            if (s1Count[index] == windowCount[index]) {
                matches++;
            } else if (s1Count[index] - 1 == windowCount[index]) {
                matches--;
            }

           }
        }

        return matches == 26;
        
    }
};
