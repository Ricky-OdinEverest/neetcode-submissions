/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

    vector<int> helperVec;
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return dfs(root, 0 ,targetSum);
        
    }

    bool dfs(TreeNode* root, int curSum, int targetSum)
    {
        if(!root) return false;

        curSum += root->val;

       
      //  helperVec.push_back(root->val);

        if (!root->left && !root->right) {
            return curSum == targetSum;
        }

        
        return dfs(root->left, curSum ,targetSum) ||  dfs(root->right, curSum ,targetSum);
       
    }
};