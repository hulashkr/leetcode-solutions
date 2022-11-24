//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>arr)
	{
	    // code here
	    
	    int n=arr.size();
	    
	   // stores the length of longest increasing subsequence from start
	    vector<int> dp1(n,1);
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<i; j++)
	        {
	            if(arr[j]<arr[i] && dp1[j]+1>dp1[i])
	            {
	                dp1[i]=dp1[j]+1;
	            }
	        }
	    }
	    
	   // stores the length of longest increasing subsequence from end
	    vector<int> dp2(n,1);
	    for(int i=n-1; i>=0; i--)
	    {
	        for(int j=n-1; j>i; j--)
	        {
	            if(arr[j]<arr[i] && dp2[j]+1>dp2[i])
	            {
	                dp2[i]=dp2[j]+1;
	            }
	        }
	    }
	    int ans=0;
	    for(int i=0; i<n; i++)
	    {
	        ans=max(ans,dp1[i]+dp2[i]-1);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends