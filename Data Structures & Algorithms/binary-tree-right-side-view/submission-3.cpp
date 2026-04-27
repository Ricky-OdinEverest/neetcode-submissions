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
    vector<int> rightSideView(TreeNode* root) {

// visible nodes can include hanging left side nodes
        vector<int> res; 
        if(!root) return res;

        TreeNode* temp = root;
        queue<TreeNode*> q;
        q.push(root);
        //bfs
        while(!q.empty())
        {
            int size = q.size();
            TreeNode* visNode = nullptr;
           // res.push_back(visNode->val);
            for(int i = 0; i < size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if (node) 
                {
                    visNode = node;
                    q.push(node->left);
                    q.push(node->right);
                }

            }
       if(visNode)
       {
        res.push_back(visNode->val);
       }
    }
     return res;
    }
};
