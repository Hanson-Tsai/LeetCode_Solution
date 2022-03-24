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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BinarySearchTree(nums, 0, nums.size()-1);
    }
private:
    TreeNode* BinarySearchTree(vector<int>&nums, int low, int high){
        if(low>high)return NULL;
        
        int mid = (low+high)/2;
        TreeNode* root = new TreeNode;
        root->val = nums[mid];
        root->left = BinarySearchTree(nums, low, mid-1);
        root->right = BinarySearchTree(nums, mid+1, high);
        return root;
    }
};