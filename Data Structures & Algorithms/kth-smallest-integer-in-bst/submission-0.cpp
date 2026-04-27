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
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp = root;
        int smallest = 0;

        while(temp)
        {
            if(!temp->left)
            {
                //res.push_back(temp->val);
                smallest += 1;
                if(smallest == k)
                {
                    return temp->val;
                }
                temp = temp->right; 
                
            }
            else
            {
                TreeNode* prev = temp->left;
                while(prev->right && prev->right !=temp)
                {
                    prev = prev->right;
                }
                if(!prev->right)
                {
                    prev->right = temp;
                    temp = temp->left;
                   } else{
                prev->right = nullptr;
                smallest += 1;
                if(smallest == k)
                {
                    return temp->val;
                }
                        temp = temp->right;
                    }
                }
            }

            return temp->val;
    }
};
