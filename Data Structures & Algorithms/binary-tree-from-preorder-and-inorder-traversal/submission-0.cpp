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

    int preIdx = 0;
    int inIdx = 0;
    //helper function for recursion
    TreeNode* dfs(vector<int>& preorder, vector<int>& inorder, int limit)
    {
        if(preIdx >= preorder.size()) return nullptr;

        if(inorder[inIdx] == limit)
        {
            inIdx++;
            return nullptr;
        }
        //Init root at first preOder value which is the root then inrement
        TreeNode* root = new TreeNode(preorder[preIdx++]);
        root->left = dfs(preorder, inorder, root->val);
        root->right = dfs(preorder, inorder, limit);
        // root in the final return val
        return root;
    }



public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        return dfs(preorder, inorder, 1000);
        
        
    }
};
