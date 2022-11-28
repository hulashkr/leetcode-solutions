//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    int s=0,e=-1,i=0,j=0,maxi=0,sum=0;
	    while(j<n)
	    {
	        if(a[j]>=0)
	        {
	            sum+=a[j++];
	        }
	        else
	        {
	            if(maxi<sum)
	            {
	                maxi=sum;
	                s=i;
	                e=j-1;
	            }
	            sum=0;
	            j++;
	            i=j;
	        }
	    }
	    if(maxi<sum)
	    {
	        maxi=sum;
            s=i;
            e=j-1;
	    }
	    vector<int> ans;
	    for(int i=s; i<=e; i++)
	    {
	        ans.push_back(a[i]);
	    }
	    if(ans.empty()) ans.push_back(-1);
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends