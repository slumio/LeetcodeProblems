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
bool summ(TreeNode* root,int curr)
{   
    if(!root)return false;

    if(!root->left&&!root->right)
    {  
        curr-=root->val;
        if(curr==0)return true;
        else return false;
    }



  return summ(root->left,curr-root->val)||summ(root->right,curr-root->val);



}
 
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return summ(root,targetSum);
    }
};