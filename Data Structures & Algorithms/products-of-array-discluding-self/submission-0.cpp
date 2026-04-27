class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> res;
        vector<int> prefix;
        vector<int> postfix(nums.size() - 1);
        int preProd = 1;
        int postProd = 1;

        int j = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++)
        {
            preProd *= nums[i];
            postProd *= nums[j];
            prefix.push_back(preProd);
            postfix[j--] = postProd;
            //.push_back(postProd);
        }

        for(int k = 0; k < nums.size(); k++)
        {
            if(k == 0)
            {
                res.push_back(postfix[k + 1]);
            }
            else if(k == nums.size() - 1)
            {
                 res.push_back(prefix[k - 1]);
            }
            else
            {
                res.push_back(prefix[k - 1] * postfix[k + 1]);
               
            }
            
        }
        return res;
    }
};
