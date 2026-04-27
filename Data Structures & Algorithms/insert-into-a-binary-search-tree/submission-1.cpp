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
       TreeNode* temp = root;
        while(temp)
        {
           
            if(val < temp->val)
            {
                if(!temp->left)
                {
                    TreeNode* newNode = new TreeNode(val);
                    temp->left = newNode;
                    return root;
                }
                temp = temp->left;

                
            }
            else
            {
                if(!temp->right)
                {
                    TreeNode* newNode = new TreeNode(val);
                    temp->right = newNode;
                    return root;
                }
                temp = temp->right;

            }

        }
        
        return nullptr;
        
    }
};