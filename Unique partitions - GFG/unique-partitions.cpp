//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<vector<int>> ans;
	void solve(vector<int> &v,int n,int x)
	{
	    if(n==0)
	    {
	        ans.push_back(v);
	        return;
	    }
	    for(int i=x; i>0; i--)
	    {
	        if(n-i>=0)
	        {
	            v.push_back(i);
	            solve(v,n-i,i);
	            v.pop_back();
	        }
	    }
	    
	}
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
        vector<int> v;
        solve(v,n,n);
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
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends