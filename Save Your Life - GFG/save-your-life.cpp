//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here       
          string ans="";
          unordered_map<char,int> mp;
          for(int i=0; i<n; i++){
              mp[x[i]]=b[i];
          }
          int maxi=INT_MIN,curr=0,s=0;
          for(int i=0; i<w.size(); i++){
              int val=mp.find(w[i])!=mp.end()?mp[w[i]]:(int)w[i];
              curr+=val;
              if(curr>maxi){
                  maxi=curr;
                  ans=w.substr(s,i-s+1);
              }
              if(curr<0){
                  curr=0;
                  s=i+1;
              }
          }
          return ans;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends