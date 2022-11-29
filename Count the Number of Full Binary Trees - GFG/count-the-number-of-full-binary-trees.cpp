//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include <bits/stdc++.h>
#define ll long long int
class Solution{
public:
    
    long long int numoffbt(long long int arr[], int n){
        // Your code goes here
        const ll mod=1e9+7;
        ll ans=0;
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0; i<n; i++)
        {
            maxi=(arr[i]>maxi)?arr[i]:maxi;
            mini=(arr[i]<mini)?arr[i]:mini;
        }
        vector<bool> present(maxi+1,false);
        vector<ll> ntree(maxi+1);
        for(int i=0; i<n; i++)
        {
            present[arr[i]]=true;
            ntree[arr[i]]=1;
        }
        for(int i=mini; i<=maxi; i++)
        {
            if(present[i]==false) 
            {
                continue;
            }
            for(int j=2; j<=i && i*j<=maxi; j++)
            {
                int prod=i*j;
                if(present[prod]==false)
                {
                    continue;
                }
                ntree[prod]=(ntree[prod]+(ntree[i]*ntree[j])%mod)%mod;
                if(i!=j) 
                {
                    ntree[prod]=(ntree[prod]+(ntree[i]*ntree[j])%mod)%mod;
                }
            }
            ans=(ans+ntree[i])%mod;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<<ob.numoffbt(a,n)<<endl;
		
	}
	return 0;
}


// } Driver Code Ends