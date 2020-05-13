/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   
    int traverse(TreeNode* root, int &d){
        if(root==NULL)
            return 0;
        int ld = traverse(root->left,d);
        int rd = traverse(root->right,d);
        d = max(ld+rd,d);
        return max(ld,rd)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        traverse(root,d);
        return d;
        
    }
};