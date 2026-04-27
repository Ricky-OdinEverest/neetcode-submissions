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
//main / helper function that stors Node values in a vecvtor and maps them to a list
map<int, vector<int>>  bfsMap(TreeNode* root) {
    //queue feeds into a map which may be redundant
    queue<pair<TreeNode*, int>> q;
    map<int, vector<int>> levelMap;

    if (root) {
    q.push({root, 0});
    }
    
    int level = 0;
    while (!q.empty()) {
        auto [node, lvl] = q.front();
        q.pop();

            // Record this node’s value at its level:
            levelMap[lvl].push_back(node->val);

        if (node->left) {
            q.push({node->left, lvl + 1});
        }
        if (node->right) {
            q.push({node->right, lvl + 1});
        }
    }

    return levelMap;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {

        map<int, vector<int>> levelMap = bfsMap(root);

        vector<vector<int>> levelVec;
        // Iterate in ascending order of level (map is already sorted by key)
        for (auto const& kv : levelMap) {
            // each kv.first is the level, kv.second is the vector<int> of node‐values
            levelVec.push_back(kv.second);
        }

        return levelVec;
    }
};
