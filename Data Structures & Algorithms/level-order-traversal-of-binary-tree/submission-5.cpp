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
    vector<vector<int>> levelOrder(TreeNode* root) {

    vector<vector<int>> res;

    queue<TreeNode*> q;

    if (root) {
        TreeNode* temp = root;
        q.push(temp);
    }


    while(!q.empty())
    {
        vector<int> level;
        int qSize = q.size();    
            
        for(int i = 0; i < qSize; i++)
        {   
            TreeNode* curr = q.front();
            q.pop();
            if(curr)
            {
                level.push_back(curr->val);
               
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }


        }
        if(level.size() > 0)
        {
            res.push_back(level);
        }
        

    }
     return res;   
    }
};
