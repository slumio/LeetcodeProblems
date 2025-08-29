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

class Solution {
public:
    vector<string> ans;

    void path(TreeNode* root, string temp) {
       
        if(!root)return ;
        if (!root->left && !root->right) {
            if (!temp.empty())
                temp += "->";

            temp += to_string(root->val);

            ans.push_back(temp);
            return;
        }

        if (!temp.empty()) {

            temp += "->";
        }
        temp += to_string(root->val);

        path(root->left, temp);
        path(root->right, temp);

        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
     
        path(root, "");
        return ans;
    }
};