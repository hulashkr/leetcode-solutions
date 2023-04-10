//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        // code here
        vector<int> arrx,arry;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==x) arrx.push_back(i);
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]==y) arry.push_back(i);
        }
        // cout<<"before sorting : "<<endl;
        // for(auto x: arrx) cout<<x<<" ";
        // cout<<endl;
        // for(auto y: arry) cout<<y<<" ";
        // cout<<endl;
        if(arrx.size()>0 && arry.size()>0) 
        {
            sort(arrx.begin(),arrx.end());
            sort(arry.begin(),arry.end());
        }
        else return -1;
        int diff=INT_MAX;
        for(int i=0; i<arrx.size(); i++)
        {
            for(int j=0; j<arry.size(); j++)
            {
                diff=min(diff,abs(arrx[i]-arry[j]));
            }
        }
        return diff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends