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
    void inorder(TreeNode* root,vector<int>& result){
        if(root==NULL)
            return ;
        inorder(root->left,result);
        result.push_back(root->val);
        inorder(root->right,result);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>result;
        inorder(root,result);
        TreeNode* ans=new TreeNode(result[0]);
        TreeNode* temp=ans;
        
        for(int i=1;i<result.size();i++){
            temp->right=new TreeNode(result[i]);
            temp=temp->right;
        }
        return ans;
    }
};