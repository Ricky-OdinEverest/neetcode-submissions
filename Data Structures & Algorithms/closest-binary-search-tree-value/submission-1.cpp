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
    int closestValue(TreeNode* root, double target) {

        

        if(!root) return -1;
        int closest = root->val;
        TreeNode* temp = root;

        while(temp)
        {
            double val = static_cast<double>(temp->val);
            double currDist = abs(target - val);
            double prevDist = abs(target - static_cast<double>(closest));

            if(currDist < prevDist) closest = static_cast<int>(val);
           
            if(val == target) return target;
            if(val < target)
            {
                temp = temp->right;
            }
            if(val > target)
            {
                temp = temp->left;
            }
        }

        return closest;
    }
};
