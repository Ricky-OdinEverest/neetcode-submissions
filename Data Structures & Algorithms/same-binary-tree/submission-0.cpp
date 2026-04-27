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

    vector<int> tVec;
    
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(!p && !q) return true;
        if(!p || !q) return false;

        buildVec(p);
        vector<int> pVec = tVec;
        tVec.clear();
        buildVec(q);
        vector<int> qVec = tVec;

        return qVec == pVec;
        
    }

    void buildVec(TreeNode* root)
    {
        
        if(!root)
        {
            tVec.push_back(-1);
            return;
        } 

        tVec.push_back(root->val);

        buildVec(root->left);
        buildVec(root->right);

    }
};
