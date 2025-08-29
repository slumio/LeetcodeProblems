/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

int sum(TreeNode *root, bool ok)
{

    if(!root)return 0;

    if(!root->left&&!root->right)
    {

         if(ok)return root->val;
         else return 0;
    }


    return sum(root->left,true)+sum(root->right,false);


} 
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {

        if (!root)
            return 0;


         return sum(root,false);   
       

    }
};