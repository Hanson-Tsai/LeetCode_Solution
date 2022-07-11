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
    vector<vector<int>> result;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        help(root, 0);
        return result;
    }
private:
    void help(TreeNode* root, int level){
        if(!root)return;
        if(result.size() == level)
            result.push_back(vector<int>());
        result[level].push_back(root->val);
        help(root->left, level+1);
        help(root->right, level+1);
        
        return;
    }
};