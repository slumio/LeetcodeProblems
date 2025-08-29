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

 int isbal(TreeNode *root,bool &ok)
 {
    
    if(!root)return 0;


    int p=isbal(root->left,ok)+1;
    int q=isbal(root->right,ok)+1;

     ok=ok&&(abs(p-q)<=1);

    return max(p,q); 

 }
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
        bool ok=true;
       
       int p=isbal(root,ok);
       return ok;
    }
};