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
    void solve(TreeNode* root, int val,int currdep, int depth){
        if(root==NULL) return;
        if(currdep==depth-1){
            TreeNode* l=root->left;
            root->left=new TreeNode(val);
            root->left->left=l;
            
            TreeNode* r=root->right;
            root->right=new TreeNode(val);
            root->right->right=r;
        }
        solve(root->left,val,currdep+1,depth);
        solve(root->right,val,currdep+1,depth);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newNode = new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        solve(root,val,1,depth);
        return root;
    }
};