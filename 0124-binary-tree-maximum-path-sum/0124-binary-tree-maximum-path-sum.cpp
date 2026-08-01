class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }

    int maxPathDown(TreeNode* node, int &maxi) {
        if (node == NULL)
            return 0;

        int left = max(0, maxPathDown(node->left, maxi));
        int right = max(0, maxPathDown(node->right, maxi));

        // Update maximum path sum
        maxi = max(maxi, left + right + node->val);

        // Return maximum path including current node
        return max(left, right) + node->val;
    }
};