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
        vector<vector<int>> res; //define the result vector
        if(!root) return res; // if there is no root return the empty vector

        queue<TreeNode*> q; // Define a first in first out data structure

        q.push(root); // root is pushed to the front of the line

        while(!q.empty())
        { 
            // while any item is in que declara a vecotr and init an int the size of the q
            // this vecotr store everything in the current level
            vector<int> level;
            int size = q.size();

            for (int i = q.size(); i > 0; i--)
            {
                //for each item in the que
                // node is the front
                // remove the front item from the line
                TreeNode* node = q.front();
                q.pop();
                if(node)
                {
                    level.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);

                }
            }
            if(!level.empty())
            {
                res.push_back(level);
            }
        }

        return res;

        
    }
};
