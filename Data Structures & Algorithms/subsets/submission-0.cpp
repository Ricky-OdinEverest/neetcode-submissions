class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> res = {{}};

          for(int num : nums)
        {
            int size = res.size();

              for (int i = 0; i < size; i++) {
                vector<int> subset = res[i];
                subset.push_back(num);
                res.push_back(subset);
            }

        }

         return res;
        
    }

    /* [1,2,3]

     res = {{}}

     size = 1 

    subset = res[i] = {};

    subset.push_back(num)

    res = {{},{1}}

    size = 2

     res = {{},{1},{2}}

     res = {{},{1},{2},{1,2}}



    
     */
};
