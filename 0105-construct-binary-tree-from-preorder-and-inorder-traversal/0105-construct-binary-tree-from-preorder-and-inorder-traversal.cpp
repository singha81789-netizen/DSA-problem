/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    TreeNode* buildtree(vector<int>& preorder, int preStart, int preEnd,
                        vector<int>& inorder, int inStart, int inEnd,
                        map<int,int>& inMap)
    {
        if(preStart > preEnd || inStart > inEnd)
            return NULL;

        // Root is first element of preorder
        TreeNode* root = new TreeNode(preorder[preStart]);

        // Root index in inorder
        int inRoot = inMap[root->val];

        // Number of nodes in left subtree
        int numsLeft = inRoot - inStart;

        // Build left subtree
        root->left = buildtree(preorder,
                               preStart + 1,
                               preStart + numsLeft,
                               inorder,
                               inStart,
                               inRoot - 1,
                               inMap);

        // Build right subtree
        root->right = buildtree(preorder,
                                preStart + numsLeft + 1,
                                preEnd,
                                inorder,
                                inRoot + 1,
                                inEnd,
                                inMap);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        map<int,int> inMap;

        // Store inorder value -> index
        for(int i = 0; i < inorder.size(); i++)
        {
            inMap[inorder[i]] = i;
        }

        return buildtree(preorder,
                         0,
                         preorder.size() - 1,
                         inorder,
                         0,
                         inorder.size() - 1,
                         inMap);
    }
};