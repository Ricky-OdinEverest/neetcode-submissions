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

TreeNode* minValueNode(TreeNode* root) {
    TreeNode* temp = root;
    while (temp && temp->left) {
        temp = temp->left;
    }
    return temp;
}




TreeNode* deleteNode(TreeNode* root, int value) {
         if (root == nullptr) return nullptr;

         if(value < root->val)
         {
            root->left = deleteNode(root->left, value);
         }

         else if(value > root->val)
         {
            root->right = deleteNode(root->right, value);
         }
         else
         {
            if(root->right == nullptr &&  root->left == nullptr)
            {
                delete(root);
                return nullptr;
            }
            else if(root->left == nullptr)
            {
                TreeNode* temp = root->right;
                delete(root);
                return temp;
            }
            else if(root->right == nullptr)
            {
                TreeNode* temp = root->left;
                delete(root);
                return temp;
            }
            else
            {
                TreeNode* tempMin = minValueNode(root->right);
                root->val = tempMin->val;
                root->right = deleteNode(root->right, tempMin->val);
            }
         }
         return root;
}
};