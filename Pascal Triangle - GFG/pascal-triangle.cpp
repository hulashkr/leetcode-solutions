//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
    long long mod=1e9+7;
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<ll>> ans(n,vector<ll>(n));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i+1; j++)
            {
                if(i==j || j==0)
                {
                    ans[i][j]=1;
                }
                else
                {
                    ans[i][j]=(ans[i-1][j-1]+ans[i-1][j])%mod;
                }
            }
        }
        return ans[n-1];
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends