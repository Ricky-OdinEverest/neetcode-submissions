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
public:
bool goodTree = true;
    bool isBalanced(TreeNode* root) {

        

        if(!root) return goodTree;

        dfs(root, goodTree);
        
        return goodTree;
    }

    int dfs(TreeNode* root, bool &goodTree) 
    {
        //return 0 if null
        if(!root)
        {
            return 0;
        }
        


        //find height of each sub tree
        int left = dfs(root->left, goodTree);
        int right = dfs(root->right, goodTree);
        
        if(goodTree)
        {
            goodTree = abs(left - right) > 1 ? false : true;
        }
        

        return 1 + max(left, right);
    }
};
