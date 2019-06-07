class Solution {
public:
    int maxDepth(TreeNode* root) {
        int max_depth = dfs(root);
        return max_depth;
    }
    int dfs(TreeNode* root) {
        if (!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        return max(left, right) + 1;
    }   
}; 