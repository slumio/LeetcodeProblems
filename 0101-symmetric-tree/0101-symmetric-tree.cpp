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
bool ismirror(TreeNode *p,TreeNode *q)
{
      if(!p&&!q)return true;
      if(!p||!q)return false;

      if(p->val!=q->val)return false;

      return ismirror(p->left,q->right)&&ismirror(p->right,q->left);
}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
     
     return ismirror(root->left,root->right);
    }
};