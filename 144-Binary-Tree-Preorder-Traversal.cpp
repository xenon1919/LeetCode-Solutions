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
        //Iterative Approach
        vector<int> result;
        stack<TreeNode*> stack;
        if(root) {
            stack.push(root);
        }

        while(!stack.empty()) {
            TreeNode* node = stack.top();
            stack.pop();
            result.push_back(node->val);

            if(node->right) {
                stack.push(node->right);
            }
            if(node->left) {
                stack.push(node->left);
            }
        }

        return result;
        
    }
};