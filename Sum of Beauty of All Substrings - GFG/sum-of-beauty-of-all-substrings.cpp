//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beauty(vector<int> &freq)
    {
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0; i<26; i++)
        {
            if(freq[i]==0) continue;
            maxi=max(maxi,freq[i]);
            mini=min(mini,freq[i]);
        }
        return maxi-mini;
    }
  
    
    int beautySum(string s) {
        // Your code goes here
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            vector<int> freq(26,0);
            for(int j=i; j<s.size(); j++)
            {
                freq[s[j]-'a']++;
                ans+=beauty(freq);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends