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
private:
    void getleaf(TreeNode* root,vector<int>& result){
        if(root==NULL)
            return ;
        if(root->left==NULL && root->right==NULL){
            result.push_back(root->val);
            return;
        }
        getleaf(root->left,result);
        getleaf(root->right,result);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaves1,leaves2;
        getleaf(root1,leaves1);
        getleaf(root2,leaves2);
        return leaves1==leaves2;
        

        
    }
};