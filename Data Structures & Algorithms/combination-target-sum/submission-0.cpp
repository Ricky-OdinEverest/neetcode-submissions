class Solution {
public:
//result vector is public

vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        // recusive call on a sorted list 
        sort(nums.begin(), nums.end());
        dfs(0, {}, 0, nums, target);
        return res;
        
    }

        
        void dfs(int i, vector<int> cur, int total, vector<int>& nums, int target) {
        if (total == target) {
            res.push_back(cur);
            return;
        }
        //since the list is sorted we can return if the total here is too high
        for (int j = i; j < nums.size(); j++) {
            if (total + nums[j] > target) {
                return;
            }
            //push current num onto are current vec. it should start at 0
            cur.push_back(nums[j]);
            // now starting at 0 we call the func again with a higher total
            //this will call it on every number in the list
            //it will also call it on itself and every number that comes after
            dfs(j, cur, total + nums[j], nums, target);
            cur.pop_back();
        }
    }
};
