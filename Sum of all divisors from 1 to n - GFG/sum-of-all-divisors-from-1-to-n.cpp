//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    // long long sumOfDiv(int x)
    // {
    //     long long sum=0;
    //     for(int i=1; i<=x; i++)
    //     {
    //         if(x%i==0) sum+=i;
    //     }
    //     return sum;
    // }
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum=0;
        for(int i=1; i<=N; i++)
        {
            sum+=N/i*i;
        }
        return sum;
        
        
        
        
        
        // long long sum=0;
        // for(int i=1; i<=N; i++)
        // {
        //     sum+=sumOfDiv(i);
        // }
        // return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends