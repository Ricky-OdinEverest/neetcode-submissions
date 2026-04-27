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

        vector<int> res;
        TreeNode* recorder = root;
        //start traversal
        while(recorder)
        {
            //if you go all the way left push the value
            if(!recorder->left)
            {
                res.push_back(recorder->val);
                //try to go right
                recorder = recorder->right;
            }
            else
            {
                //if left is available make a ladder back up
                TreeNode* inspector = recorder->left;

                while(inspector->right && inspector->right != recorder)
                {
                    inspector = inspector->right;   
                }
                // If you were here before
                if(inspector->right == recorder)
                {
                    //git rid of the path
                    inspector->right = nullptr;

                    //record the current value
                    res.push_back(recorder->val);

                    //go to the right
                    recorder = recorder->right;
                }
                else
                {
                    inspector->right = recorder;
                    recorder = recorder->left;
                }

            }
        }
        
        return res;
    }
};