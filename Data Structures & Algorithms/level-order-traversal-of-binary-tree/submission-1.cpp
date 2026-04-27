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
    vector<vector<int>> levels;
    if (!root) return levels;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int sz = q.size();                   // nodes at current level
        vector<int> currLevel;

        for (int i = 0; i < sz; ++i) {       // iterate exactly sz times
            TreeNode* node = q.front();      // current node
            q.pop();

            currLevel.push_back(node->val);  // add node's value to current level

            if (node->left) q.push(node->left);   // enqueue left child
            if (node->right) q.push(node->right); // enqueue right child
        }

        levels.push_back(currLevel);         // save current level's values
    }

    return levels;
}

};
