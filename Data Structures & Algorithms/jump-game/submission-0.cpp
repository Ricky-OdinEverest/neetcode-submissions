class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        //init the goal = length we nees to travel
        int goal = nums.size() - 1;

        // start from the second to last entry and iterate backward
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            //if curr index plus jumps allows us to enter or exceed the goal. 
            // we only need to get this far
            if (i + nums[i] >= goal) 
            {
                //the goal now only needs to be able to reach this index
                goal = i;
            }
        }

        return goal == 0;
    }
};