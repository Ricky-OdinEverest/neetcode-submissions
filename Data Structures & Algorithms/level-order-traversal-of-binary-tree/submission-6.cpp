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
    //start with a res and q
    queue<TreeNode*> q;

    // if root exists, add it to the q
    if (root) {
        TreeNode* temp = root;
        q.push(temp);
    }

    // if q is not empty, init a level and the current size of the q
    while(!q.empty())
    {
        vector<int> level;
        // ensure loop only runs at current q size at it will increase in the loop;
        int qSize = q.size();    
            
        for(int i = 0; i < qSize; i++)
        {   
            //init curr as the front then remove
            TreeNode* curr = q.front();
            q.pop();
            if(curr)
            {
                // push back the value then add children to the q
                level.push_back(curr->val);
               
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
                // now all children are in the q and values of the current level are in the level vector
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
