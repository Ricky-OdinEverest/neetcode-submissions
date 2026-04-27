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

        vector<int> res;

        if(!root) return res;
        
        queue<TreeNode*> q;

        q.push(root);
        // root need to push first to start loop
        while(!q.empty())
        {
            int size = q.size();
            TreeNode* visNode = nullptr;
        //start tree node null so we don't accidentally push an 
        //unseen node at the front
            for(int i = 0; i < size; i++)
            {
                // vis node is the last valid node in a que
                //since we push left first it will be at the front of the line.
                // but if there is no valid right value it will be the visible node
                TreeNode* curr = q.front();
                q.pop();
                if(curr)
                {
                    visNode = curr;
                    q.push(curr->left);
                    q.push(curr->right);

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
