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
    
    void solve(TreeNode* root,int col, int row,map<int,map<int,multiset<int>>>& mpp){
        if(root==NULL) return;
        mpp[col][row].insert(root->val);
        solve(root->left,col-1,row+1,mpp);
        solve(root->right,col+1,row+1,mpp);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,map<int,multiset<int>>> mpp;
        solve(root,0,0,mpp);
        for(auto col: mpp){
            vector<int> column;
            for(auto row:col.second){
                column.insert(column.end(),row.second.begin(),row.second.end());
            }
            ans.push_back(column);
        }
        return ans;
    }
};