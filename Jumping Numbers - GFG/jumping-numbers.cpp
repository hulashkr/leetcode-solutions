//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


#include<string.h>
#define ll long long
class Solution {
    
  public:
  
    // bool isJumpingNum(string s){
    //     if(s.size()==1) return true;
    //     bool flag=true;
    //     for(int i=1; i<s.size(); i++)
    //     {
    //         int a = s[i]-'0';
    //         int b = s[i-1]-'0';
    //         if(abs(a-b)!=1) flag=false;
    //     }
    //     if(flag) return true;
    //     return false;
    // }
    long long jumpingNums(long long X) {
        // code here
        
        
        if(X<=9) return X; 
        queue<int> q;
        for(int i=1; i<=9; i++)
        {
            q.push(i);
        }
        int ans=INT_MIN;
        while(q.size()>0)
        {
            int dgt=q.front();
            q.pop();
            ans=max(ans,dgt);
            int n1=dgt*10+dgt%10-1;
            int n2=dgt*10+dgt%10+1;
            if(dgt%10==0)
            {
                if(n2<=X) q.push(n2); 
            }
            else if(dgt%10==9)
            {
                if(n1<=X) q.push(n1);
            }
            else
            {
                if(n1<=X) q.push(n1);
                if(n2<=X) q.push(n2);
            }
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // string s=to_string(X);
        // ll ans=0;
        // for(ll i=1; i<=X; i++)
        // {
        //     if(isJumpingNum(to_string(i))) ans=i;
        // }
        // return ans;
        
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends