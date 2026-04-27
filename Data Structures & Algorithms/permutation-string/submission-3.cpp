class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int> s1Count(26, 0);
        vector<int> windowCount(26, 0);

        // 1. Fill s1Count and the very first window of s2
        for (int i = 0; i < s1.length(); i++) {
            s1Count[s1[i] - 'a']++;
            windowCount[s2[i] - 'a']++;
        }

        // 2. Slide the window across s2
        for (int i = 0; i <= s2.length() - s1.length(); i++) {
            // Directly compare the two arrays (Intuitive!)
            if (s1Count == windowCount) return true;

            // Move the window: remove the character at 'i', add the next one
            if (i + s1.length() < s2.length()) {
                windowCount[s2[i] - 'a']--;                   // Outgoing
                windowCount[s2[i + s1.length()] - 'a']++;    // Incoming
            }
        }

        return false;
    }
};