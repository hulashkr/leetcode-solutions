//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++
// #include <vector>

class Solution{
public:
    const static int N=40;
    long long dp[N][N];
    long long nCr(int n,int r)
    {
        if(r>n) return 0;
        if(r==0 || r==n) return 1;
        if(dp[n][r]!=-1) return dp[n][r];
        auto res=nCr(n-1,r-1)+nCr(n-1,r);
        return (dp[n][r]=res);
    }
    long long count(long long x) {
        // Code Here
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                dp[i][j]=-1;
            }
        }
        long long ans=0;
        int ones=0,bits=0;
        while(x!=0)
        {
            if(x&1)
            {
                ans += nCr(bits,++ones);
            }
            bits++;
            x=x>>1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    
	int t;
	cin >> t;
	while (t-- > 0) {
	    long long x; cin >> x;
	    Solution ob;
	    cout << ob.count(x) << '\n';
	}
	return 0;
}
// } Driver Code Ends