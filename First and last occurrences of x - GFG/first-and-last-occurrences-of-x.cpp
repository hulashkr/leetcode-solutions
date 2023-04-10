//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstOccurence(int arr[],int n,int x)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        int m = i+(j-i)/2;
        if(arr[m]==x)
        {
            if(arr[m]==arr[m-1]) j=m-1;
            else return m;
        }
        else if(arr[m]>x)
        {
            j=m-1;
        }
        else i=m+1;
    }
    return -1;
}
int lastOccurence(int arr[],int n,int x)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        int m=i+(j-i)/2;
        if(arr[m]==x)
        {
            if(m<n-1 && arr[m]==arr[m+1]) i=m+1;
            else return m;
        }
        else if(arr[m]>x)
        {
            j=m-1;
        }
        else i=m+1;
    }
    return -1;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans(2,-1);
    int firstOccur = firstOccurence(arr,n,x);
    int lastOccur = lastOccurence(arr,n,x);
    ans[0]=firstOccur;
    ans[1]=lastOccur;
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends