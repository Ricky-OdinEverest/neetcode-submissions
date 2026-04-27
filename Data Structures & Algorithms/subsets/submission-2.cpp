class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        
        // OUTER LOOP: The "Pattern Generator"
        // 1 << n is 2^n. If n=3, this loops from 0 to 7 (000 to 111 in binary).
        // Each 'i' represents a unique combination of on/off switches.
        for (int i = 0; i < (1 << n); i++) {
            
            vector<int> subset; // Create a fresh list for this specific pattern 'i'
            
            // INNER LOOP: The "Bit Checker"
            // We iterate through every bit position (index) of the number 'i'
            // to see which ones are turned ON.
            for (int j = 0; j < n; j++) {
                
                // THE CHECK:
                // (1 << j) creates a mask for the j-th bit (e.g., 001, 010, 100).
                // i & mask checks if that specific bit is 1 in our current pattern 'i'.
                if (i & (1 << j)) {
                    // If the bit is ON, we include the number at that index.
                    subset.push_back(nums[j]);
                }
            }
            
            // Add the completed subset to our final list of results
            res.push_back(subset);
        }
        
        return res;
    }
};