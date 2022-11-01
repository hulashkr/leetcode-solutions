class Solution {
public:
    int solve(int r,int c,vector<vector<int>>& grid){
        if(r>=grid.size()) return c;
        if(grid[r][c]==1 && c+1<grid[0].size() && grid[r][c+1]==1) 
            return solve(r+1,c+1,grid);
        else if(grid[r][c]==-1 && c-1>=0 && grid[r][c-1]==-1) 
            return solve(r+1,c-1,grid);
        else return -1;
    }
    
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<int> ans(m);
        for(int j=0; j<m; j++){
            ans[j]=solve(0,j,grid);
        }
        return ans;
    }
};