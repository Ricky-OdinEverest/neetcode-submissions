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
    TreeNode* deleteNode(TreeNode* root, int key) {

    if(!root) return root;
    
    TreeNode* temp = root;
    TreeNode* parent = nullptr;

    while(temp && temp->val!= key)
    {
        parent = temp;
        if(key < temp->val)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
        // if root is the only value
        if(!temp) return root;

        if(!temp->left || !temp->right)
        {
            TreeNode* child = temp->left ? temp->left : temp->right;
            //if root has one child and is temp
            if(!parent) return child;
            if(parent->left == temp)
            {
                parent->left = child;
            }
            else
            {
                parent->right = child;
            }

        }
        else
        {
            // Node with two chilren requires replacing temp with the
            // Lowest Val on the right subtree
            TreeNode* subParent = nullptr;
            TreeNode* delNode = temp;

            temp = temp->right;
            while(temp->left)
            {
                subParent = temp;
                temp = temp->left;
            }

            if(subParent) // if right sub tree had a left child
            {
                // null bottom left pointer or connect to a right child if it 
                //exist
                subParent->left = temp->right;
                // make the right pointer of the lowest subtree node replace
                // to be deleted
                temp->right = delNode->right;
            }
            //do the same above but on the right
            temp->left = delNode->left;

            if(!parent) return temp; //delete root

            //connect the original parent to the new temp node
            if(parent->left == delNode)
            {
                parent->left = temp;
            }
            else
            {
                parent->right = temp;
            }


        }
        
        return root;

    }
};