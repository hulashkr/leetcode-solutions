//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        // ************3rd Way************
        unordered_set<int> st;
        int minIndex=-1;
        for(int i=n-1; i>=0; i--)
        {
            if(st.find(arr[i]) != st.end()) minIndex=i;
            else st.insert(arr[i]);
        }
        if(minIndex>=0) return minIndex+1;
        else return -1;
        
        
        
        
        
        
        
        
        
        // ************2nd Way************
        // unordered_map<int,int> mp;
        // int minIndex=-1;
        // for(int i=n-1; i>=0; i--)
        // {
        //     mp[arr[i]]++;
        //     if(mp[arr[i]]>1) minIndex=i;
        // }
        // if(minIndex>=0) return minIndex+1;
        // else return -1;
        
        
        
        
        // ************1st Way************
        // unordered_map<int,int> mp;
        // for(int i=0; i<n; i++)
        // {
        //     mp[arr[i]]++;
        // }
        // for(int i=0; i<n; i++)
        // {
        //     if(mp[arr[i]]>1) return i+1;
        // }
        // return -1;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends