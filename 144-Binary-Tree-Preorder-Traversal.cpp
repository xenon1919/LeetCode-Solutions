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
    vector<int> preorderTraversal(TreeNode* root) {

        //Recursive Approach
        vector<int> result;
        traverse(root, result);
        return result;
    }

    void traverse(TreeNode* node, vector<int>& result) {
        if(!node) {
            return;
        }
        result.push_back(node->val);
        traverse(node->left, result);
        traverse(node->right, result);
    }
};