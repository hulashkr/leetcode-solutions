//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    // your code here
	    string ans="";
	    
	    int i=A.size()-1,j=B.size()-1;
	    int carry=0;
	    while(i>=0 || j>=0)
	    {
	        int sum=0;
	        if(i>=0)
	        {
	            sum+=A[i--]-'0';
	        }
	        if(j>=0)
	        {
	            sum+=B[j--]-'0';
	        }
	        sum+=carry;
	        ans+=sum%2+'0';
	        carry=sum/2;
	    }
	    if(carry==1)
	    {
	        ans+='1';
	    }
	    reverse(ans.begin(),ans.end()); 
	    int idx=0;
	    while(ans[idx]=='0') idx++;
	    return ans.substr(idx);
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends