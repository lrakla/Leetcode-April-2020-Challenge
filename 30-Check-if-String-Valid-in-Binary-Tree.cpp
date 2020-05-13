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
bool dfs(TreeNode* root,const vector<int>& arr, int index){
    if(root==NULL)
        return false;
    if(index>=(int)arr.size() || root->val!=arr[index])
        return false;
    if(root->left == NULL && root->right==NULL ){
        return index==(int)arr.size()-1;
    }
    return dfs(root->left,arr,index+1)||dfs(root->right,arr,index+1);
}
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
       return dfs(root,arr,0); 
    }
};
