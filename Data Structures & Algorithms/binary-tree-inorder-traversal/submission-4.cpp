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
    //Create an empty list to hold the traversal result.
    vector<int> result;
    //Set a pointer temp to the root node.
    TreeNode* temp = root;
    //Main loop
    //While temp is not null, do the following:
    while(temp)
    {
    //Case A — no left child
    //If temp->left is null: then temp has reached the lowest value in the current chain
    if(!temp->left)
    {
        //Append temp->val to the result.
        result.push_back(temp->val); 
        //Move temp to its right child (temp = temp->right).
        //Moving right will either find a new node or a link created below 
        temp = temp->right;
    }
    //Continue the loop.
    //Case B — there is a left child
    //(there is a left subtree):
    else
    {
    //Find the inorder predecessor prev of temp by starting at temp->left 
    TreeNode* prev = temp->left;
    //and moving right until:
    //prev->right is null, or
    //prev->right is temp (meaning a temporary “thread” already points back to temp).
    while(prev->right && prev->right != temp)
    {
    //Move to the rightmost node before proceeding
    prev = prev->right;
    }
    //Subcase B1 — create the thread
    //If prev->right is null:
    if(!prev->right)
    {
         //Set prev->right to temp (make a temporary thread).
        // the thread can return temp to a higher position on the tree when traversed
         prev->right = temp;
        //Move temp to its left child (temp = temp->left).
        // Now that prev has added the thread temp may continue traversal
        temp = temp->left;
    }
    //Continue the loop (do not record any value yet).
    
    //Subcase B2 — remove the thread and visit
    //Else (i.e., prev->right is temp):
    //if temp steps on a thread
    else
    {
        //Restore the tree by setting prev->right back to null (remove the temporary thread).
        prev->right = nullptr;
        //Append temp->val to the result (this is the inorder “visit”).
         result.push_back(temp->val);
        //Move temp to its right child (temp = temp->right).
          temp = temp->right;
    } 
        //Continue the loop.
    }

    //Finish

    //When the loop ends (i.e., temp becomes null), return the result list.
    }

             return result;
   
    }
};