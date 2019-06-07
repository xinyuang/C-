class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        int min_depth = dfs(root);
        return min_depth;
    }
    int dfs(TreeNode* root) {
        if(root->left == NULL && root->right == NULL) return 1;
        int left, right;
        if (root->left == NULL) left = INT_MAX;
        else left = dfs(root->left);
        if (root->right == NULL) right = INT_MAX;
        else right = dfs(root->right);
        return min(left, right) + 1;        
    }

};