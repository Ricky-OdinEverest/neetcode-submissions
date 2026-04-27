class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        // we need to reach the last index or goal
        int goal = nums.size() - 1;

        //to do so we iterate backward to see which index can reach goal
        // if an index can reach a goal it is the new goal

        for(int i = nums.size() - 2; i >= 0; --i)
        {
            int jumps = nums[i];
            if(i + jumps >= goal)
            {
                goal = i;
            }
        }

        return goal == 0;
        
    }
};
