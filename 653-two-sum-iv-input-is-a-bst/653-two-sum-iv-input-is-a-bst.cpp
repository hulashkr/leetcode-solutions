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
    vector<int> temp;
    void inorder(TreeNode* root){
        if(root!=NULL){
            inorder(root->left);
            temp.push_back(root->val);
            inorder(root->right);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int s=0,e=temp.size()-1;
        while(s<e){
            int sum=temp[s]+temp[e];
            if(sum==k) return true;
            if(sum<k) s++;
            else e--;
        }
        return false;
    }
};