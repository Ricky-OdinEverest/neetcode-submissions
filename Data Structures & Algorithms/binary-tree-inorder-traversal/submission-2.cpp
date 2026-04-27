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


     vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res{};
        stack<TreeNode*> stack;
        TreeNode* currentNode = root;

        //make a vector of node values from left to right

        // while current node is not null or stack not empty
        while(currentNode || !stack.empty())
        {
            // while current node is not null got left
            while (currentNode)
            {
                // push the current node on the stak
                stack.push(currentNode);
                //go left
                currentNode = currentNode->left;
        
            }
            // once you cannot go left the node will be null
            // but there will still be nodes in the right side
            currentNode = stack.top();
            //remove top node
            stack.pop();
            // add its value to the result vector
            res.push_back(currentNode->val);
            // assign current node to right vale
            currentNode = currentNode->right;
        }

        return res;

     }
};