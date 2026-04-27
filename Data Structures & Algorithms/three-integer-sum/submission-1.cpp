class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // Step 1: Sort the array in ascending order so we can use two-pointer technique
        sort(nums.begin(), nums.end());

        // Result container to store all unique triplets
        vector<vector<int>> res;

        // Step 2: Loop through each number as the first element of the triplet
        for(int i = 0; i < nums.size(); i++)
        {
            // If the current number is > 0, break
            // Because with a sorted array, any triplet including this and later numbers will sum > 0
            if(nums[i] > 0) break;

            // Skip duplicate values for the first element to avoid duplicate triplets
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            // Two pointers: left starts just after i, right starts at the end
            int l = i + 1, r = nums.size() - 1;

            // Step 3: While left pointer is before right pointer
            while(l < r)
            {
                // Calculate the sum of the triplet
                int sum = nums[i] + nums[l] + nums[r];

                if(sum > 0)
                {
                    // If sum is too large, move the right pointer leftward to reduce sum
                    r--;
                }
                else if(sum < 0)
                {
                    // If sum is too small, move the left pointer rightward to increase sum
                    l++;
                }
                else
                {
                    // Found a triplet with sum == 0
                    res.push_back({nums[i], nums[l], nums[r]});

                    // Move both pointers inward to look for more pairs
                    l++;
                    r--;

                    // Skip duplicate values for the left pointer
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                }
            }
        }

        // Step 4: Return all unique triplets
        return res;
    }
};
