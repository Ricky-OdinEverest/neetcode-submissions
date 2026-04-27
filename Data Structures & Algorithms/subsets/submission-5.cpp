class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> res = {{}};

        // for every num in input
        for(int num : nums)
        {
            //size is curr size of res
            int size = res.size();
            //for res.size
            for(int i = 0; i < size; i++)
            {
                //new subset is res i (0 is always the blank)
                vector<int> subsets = res[i];
                //push back the num on the curr subset. 0 is always the num alone
                subsets.push_back(num);
                res.push_back(subsets);

                //size doubles each outer iteration
                //so 

            }
        }
        return res;
    
    }
};
