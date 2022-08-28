class Solution {
public:
    void solve(vector<vector<int>>& mat,int row,int col){
        int m=mat.size(),n=mat[0].size();
        int r=row,c=col;
        vector<int> temp(101);
        while(r<m && c<n){
            temp[mat[r][c]]++;
            r++;
            c++;
        }
        r=row;
        c=col;
        for(int i=1; i<temp.size(); i++){
            while(temp[i]>0)
            {
                mat[r][c]=i;
                temp[i]--;
                r++;
                c++;
            }
        }
    }
        
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        for(int i=0; i<m; i++){
            solve(mat,i,0);
        }
        for(int j=1; j<n; j++){
            solve(mat,0,j);
        }
        return mat;
    }
    
};