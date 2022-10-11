//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        string ans="";
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){
            if(s[i]==']'){
                while(!st.empty() && st.top()!='['){
                    ans=st.top()+ans;
                    st.pop();
                }
                if(!st.empty()) st.pop();
                
                string num="";
                while(!st.empty() && st.top()>='0' && st.top()<='9'){
                    num=st.top()+num;
                    st.pop();
                }
                
                string str=ans;
                for(int j=0; j<stoi(num)-1; j++){
                    ans+=str;
                }
                
                for(auto i: ans){
                    st.push(i);
                }
                ans="";
            }
            else{
                st.push(s[i]);
            }
        }
        ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
        
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends