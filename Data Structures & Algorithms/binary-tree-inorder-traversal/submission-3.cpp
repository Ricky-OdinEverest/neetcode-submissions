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
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> res;
        TreeNode* temp = root;

        while(temp)
        {
            if(!temp->left)
            {
                res.push_back(temp->val);
                temp = temp->right; 
            }
            else
            {
                TreeNode* prev = temp->left;
                while(prev->right && prev->right !=temp)
                {
                    prev = prev->right;
                }
                if(!prev->right)
                {
                    prev->right = temp;
                    temp = temp->left;
                   } else{
                        prev->right = nullptr;
                        res.push_back(temp->val);
                        temp = temp->right;
                    }
                }
            }

            return res;
        }
        
    
};