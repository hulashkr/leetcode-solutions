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
    int solve(TreeNode* temp, int maxi){
        
        if(temp==NULL) return 0;
        
        int cnt=0;
        
        if(temp->val >= maxi){
            maxi=temp->val;
            cnt++;
        }
        // count of good nodes in left subtree
        cnt += solve(temp->left,maxi);
        
        // count of good nodes in right subtree
        cnt += solve(temp->right,maxi);
        
        // count of good nodes in the current subtree
        return cnt;
    }
    
    int goodNodes(TreeNode* root) {
        
        // if tree has no node
        if(root==NULL) return 0;
        
        // if tree has only root node and not left and right node then root node will always be a good node
        if(root->left==NULL && root->right==NULL) return 1;
        
        // for other cases root node will be counted as good node so cntGoodNode=1
        int cntGoodNode=1;
        
        // count the no. of good nodes in left subtree 
        cntGoodNode += solve(root->left,root->val);
        
        // count the no. of good nodes in right subtree
        cntGoodNode += solve(root->right,root->val);
        
        return cntGoodNode;
        
    }
};