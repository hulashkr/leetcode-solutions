//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        
        int low=0,high=0;
        int ans=0;
        map<int,int> mp;
        while(high<N)
        {
            mp[arr[high]]++;
            while((--mp.end())->first - mp.begin()->first>1)
            {
                mp[arr[low]]--;
                if(mp[arr[low]]==0) mp.erase(arr[low]);
                low++;
            }
            ans=max(ans,high-low+1);
            high++;
        }
        return ans;
        
        
        
        
        
        
       
        // int ans=1;
        // for(int i=0; i<N; i++)
        // {
        //     int maxi=arr[i];
        //     int mini=arr[i];
        //     for(int j=i+1; j<N; j++)
        //     {
        //         maxi=max(maxi,arr[j]);
        //         mini=min(mini,arr[j]);
        //         if(maxi-mini<=1) ans=max(ans,j-i+1);
        //         else break;
        //     }
        // }
        // return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends