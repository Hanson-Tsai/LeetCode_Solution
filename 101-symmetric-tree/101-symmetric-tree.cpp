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
    // Recursion O(logN)
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        else{
            return isSymmetricTest(root->left, root->right);
        }
        
    }
private:
    bool isSymmetricTest(TreeNode *q, TreeNode *p){
        if(q==NULL && p==NULL)return true;
        else if(q==NULL || p==NULL)return false;
        else if(q->val != p->val)return false;
        else{
            return isSymmetricTest(q->left, p->right) && isSymmetricTest(q->right, p->left);
        }
    }
};