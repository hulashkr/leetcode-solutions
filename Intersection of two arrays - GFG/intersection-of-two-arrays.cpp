//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        // map<int,int> mp;
        vector<int> f1(100000);
        vector<int> f2(100000);
        for(int i=0; i<n; i++)
        {
            f1[a[i]]++;
        }
        for(int i=0; i<m; i++)
        {
            f2[b[i]]++;
        }
        vector<int> ans;
        for(int i=0; i<100000; i++)
        {
            if(f1[i]>0 && f2[i]>0) ans.push_back(i);
        }
        return ans.size();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends