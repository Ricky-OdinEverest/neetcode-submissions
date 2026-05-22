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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* rootCase = new TreeNode(val);
        if(!root) return rootCase ;
        findSlot( root, val);
        return root;
        
    }
    void findSlot(TreeNode* root, int val)
    {
        if(root->val > val)
        {
            if(root->left == nullptr)
            {
                TreeNode* newNode = new TreeNode(val);
                root->left = newNode;
            }
            else
            {
                findSlot(root->left, val);
            }
           
        }
        else
        {
            if(root->right == nullptr)
            {
                TreeNode* newNode = new TreeNode(val);
                root->right = newNode;
            }
            else
            {
                findSlot(root->right, val);
            }
            
        }
    }

    //TreeNode* insertIntoBST(TreeNode* root, int val)
};