//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#define ll long long int
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        int XOR=0,res1=0,res2=0;
        for(ll i=0; i<N; i++)
        {
            XOR=XOR^Arr[i];
        }
        ll sn=XOR & ~(XOR-1);
        for(ll i=0; i<N; i++)
        {
            if((Arr[i] & sn)!=0) res1=res1^Arr[i];
            else res2=res2^Arr[i];
        }
        vector<ll> ans;
        ans.push_back(res1);
        ans.push_back(res2);
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;
        
        
        
        
        
        // *************BRUTE FORCE****************
        // set<ll> st;
        // for(ll i=0; i<N; i++)
        // {
        //     ll cnt=0;
        //     for(ll j=0; j<N; j++)
        //     {
        //         if(Arr[i]==Arr[j]) cnt++;
        //     }
        //     if(cnt%2) st.insert(Arr[i]);
        // }
        // vector<ll> v;
        // for(auto i: st) v.push_back(i);
        // sort(v.begin(),v.end(),greater<int>());
        // return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends