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
    void preorder(TreeNode* root,vector<string>& result){
        if(root==NULL){
            result.push_back("NULL");
            return;
        }
        result.push_back(to_string(root->val));
        preorder(root->left,result);
        preorder(root->right,result);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<string> result1;
        vector<string> result2;
        preorder(p,result1);
        preorder(q,result2);
        return result1==result2;
        
    }
};