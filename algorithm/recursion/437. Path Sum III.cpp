class Solution {
int res = 0;
public:
    int pathSum(TreeNode* root, int sum) {
        search(root, sum);
        if (root) {
            if (root->left) pathSum(root->left, sum);
            if (root->right) pathSum(root->right, sum);             
        }     
        return res;
    }
    void search(TreeNode* root, int tar) {
        if (root == NULL) return;
        if (root->val == tar) {
            res++;
        }
        search(root->left, tar - root->val);
        search(root->right, tar - root->val);
    }
};