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

int currSum = 0;
    
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        if(!root) return false;
        
        currSum += root->val;
        

        if(!root->left && !root->right )
        {
            if(currSum == targetSum) return true;
            currSum -= root->val;
            return false;
        } 

        if(hasPathSum(root->left, targetSum)) return true;

        if(hasPathSum(root->right, targetSum)) return true;

        currSum -= root->val;

        return false;


    }

};