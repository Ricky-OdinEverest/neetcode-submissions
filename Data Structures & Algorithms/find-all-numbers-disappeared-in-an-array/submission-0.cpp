class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> res;
        sort(nums.begin(), nums.end());

        int end = nums.size();

        int cur = 0;

        for(int i = 1; i <= end; i++)
        {
            while (cur < end && nums[cur] < i)
            {
                cur++;
            }
            if (cur == nums.size() || nums[cur] > i)
            {
                res.push_back(i);
            }

        }

        return res;
        
    }
};