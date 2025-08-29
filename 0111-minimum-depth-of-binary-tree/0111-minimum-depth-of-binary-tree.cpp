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

 int minDept(TreeNode* root) {
        if(!root)return 1e7;
        if(root&&!root->left&&!root->right)return 1;
        


        return min(minDept(root->left),minDept(root->right))+1;

    }
    int minDepth(TreeNode* root) {
      
        if(!root)return 0;

        return minDept(root);

    }
};