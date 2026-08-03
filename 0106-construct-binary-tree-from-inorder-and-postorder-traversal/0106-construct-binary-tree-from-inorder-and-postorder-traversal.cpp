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
        TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
    {
        map<int,int> inMap;

        for(int i = 0; i < inorder.size(); i++)
            inMap[inorder[i]] = i;

        return buildtree(postorder,
                         0,
                         postorder.size()-1,
                         inorder,
                         0,
                         inorder.size()-1,
                         inMap);
    }
    
    TreeNode* buildtree(vector<int>& postorder, int postStart, int postEnd,
                        vector<int>& inorder, int inStart, int inEnd,
                        map<int,int>& inMap)
    {
        if(postStart > postEnd || inStart > inEnd)
            return NULL;

        // Root is last element of postorder
        TreeNode* root = new TreeNode(postorder[postEnd]);

        int inRoot = inMap[root->val];

        int numsLeft = inRoot - inStart;
        int numsRight = inEnd - inRoot;

        // Build Right subtree first
        root->right = buildtree(postorder,
                                postEnd - numsRight,
                                postEnd - 1,
                                inorder,
                                inRoot + 1,
                                inEnd,
                                inMap);

        // Build Left subtree
        root->left = buildtree(postorder,
                               postStart,
                               postEnd - numsRight - 1,
                               inorder,
                               inStart,
                               inRoot - 1,
                               inMap);

        return root;
    }

    
};