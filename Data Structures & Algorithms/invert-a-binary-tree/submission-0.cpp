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
    TreeNode* invertTree(TreeNode* root) {

        vector<vector<int>> levelVec;

        queue<TreeNode*> q;

        if(root)
        {
            TreeNode* temp = root;
            q.push(temp);
        }

        while(!q.empty())
        {

            int qSize = q.size();
            // level 1 will be size one
            for(int i = 0; i < qSize; i++)
            {
                TreeNode* curr = q.front();
                q.pop();

                if (curr->right && curr->left) {
                    q.push(curr->left);
                    q.push(curr->right);

                    TreeNode* leafTemp = curr->left;
                    curr->left = curr->right;
                    curr->right = leafTemp;

                }
                else if (curr->right) {
                    q.push(curr->right);
                    curr->left = curr->right;
                    curr->right = nullptr;
                }
                else if (curr->left) {
                    q.push(curr->left);
                    curr->right = curr->left;
                    curr->left = nullptr;
                }
            }
        }

        return root;
        
    }
};
