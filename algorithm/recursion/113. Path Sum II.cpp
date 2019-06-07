class Solution {
    vector<vector<int>> res;
    vector<int> path;
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        recursion(root, sum, path);
        return res;
    }
    void recursion(TreeNode* root, int sum, vector<int> path) {
        if (root == NULL) return;
        if (root->val == sum && root->left == NULL && root->right == NULL) {
            path.push_back(root->val);
            res.push_back(path);
            return;
        }
        path.push_back(root->val);
        recursion(root->left, sum - root->val, path);
        recursion(root->right, sum - root->val, path);
    }
};