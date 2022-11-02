//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            vector<int> row;
            vector<int> col;
            row.push_back(0);
            col.push_back(0);
            for(int i=0; i<k; i++){
                row.push_back(enemy[i][0]);
                col.push_back(enemy[i][1]);
            }
            sort(row.begin(),row.end());
            sort(col.begin(),col.end());
            row.push_back(n+1);
            col.push_back(m+1);
            int rmax=INT_MIN,cmax=INT_MIN;
            for(int i=0; i<row.size(); i++){
                rmax=max(rmax,row[i]-row[i-1]-1);
            }
            for(int i=0; i<col.size(); i++){
                cmax=max(cmax,col[i]-col[i-1]-1);
            }
            return rmax*cmax;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends