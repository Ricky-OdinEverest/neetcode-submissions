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
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(!root) return nullptr;

        TreeNode* temp = root;
        TreeNode* parent = nullptr;

        while(temp && temp->val != key)
        {
            parent = temp;

            if(key < temp->val)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
        
         if (!temp) return root;

        if(!temp->right || !temp->left)
        {
            TreeNode* child = temp->left ? temp->left : temp->right;
            if(!parent) return child;

            if (parent->left == temp) {
            parent->left = child;
            } else {
                parent->right = child;
            }

        }
        else
        {
            TreeNode* toDel = temp;
            temp = temp->right;
            TreeNode* subTree = nullptr;
            
            while(temp->left)
            {
                subTree = temp;
                temp = temp->left;
            }
            if(subTree)
            {
                subTree->left = temp->right;
                temp->right = toDel->right;
            }

            temp->left = toDel->left;

            if(!parent) return temp;

            if (parent->left == toDel) {
            parent->left = temp;
            } else {
                parent->right = temp;
            }
        }

        return root;
        
        
    }
};