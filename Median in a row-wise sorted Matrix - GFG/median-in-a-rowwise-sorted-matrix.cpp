//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    
    int solve(vector<int> &row,int mid){
        int l=0,h=row.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(row[m]<=mid) l=m+1;
            else h=m-1;
        }
        return l;
    }
    
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here      
        int low=0,high=1e9;
        while(low<=high){
            int mid=low+(high-low)/2;
            int cnt=0;
            for(int i=0; i<R; i++){
                cnt+=solve(matrix[i],mid);
            }
            if(cnt<=(R*C)/2) low=mid+1;
            else high=mid-1;
        }
        return low;
        
        // >>>>>>>>>>>TIME LIMIT EXCEEDED<<<<<<<<<<<<
        // ***********BRUTE FORCE**************
        // int pos=(R*C+1)/2;
        // vector<int> arr;
        // for(int i=0; i<R; i++){
        //     for(int j=0; j<C; j++){
        //         arr.push_back(matrix[i][j]);
        //     }
        // }
        // sort(arr.begin(),arr.end());
        // return arr[pos-1];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends