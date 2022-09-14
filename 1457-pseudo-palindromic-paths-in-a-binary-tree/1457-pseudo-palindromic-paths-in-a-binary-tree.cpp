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
    void solve(TreeNode* root,vector<int> &freq, int &cnt){
        if(!root) return;
        freq[root->val]++;
        solve(root->left,freq,cnt);
        if(!root->left && !root->right){
            int cnto=0;
            for(auto i : freq){
                if(i%2) cnto++;
            }
            if(cnto<=1) cnt++;
        }
        solve(root->right,freq,cnt);
        freq[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> freq(10,0);
        int cnt=0;
        solve(root,freq,cnt);
        return cnt;
    }
};