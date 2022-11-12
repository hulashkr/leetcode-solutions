//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		    
		    int n=s.size();
		    int ans=0;
		    int i=0,j=0,maxi=0;
		    unordered_map<char,int> mp;
		    while(j<n)
		    {
		        mp[s[j]]++;
		        maxi=max(maxi,mp[s[j]]);
		        int length=j-i+1;
		        if(length-maxi<=k)
		        {
		            j++;
		            ans=max(ans,length);
		        }
		        else
		        {
		            mp[s[i]]--;
		            i++;
		            j++;
		        }
		    }
		    return ans; 
		   
	
		  //  int n=s.size();
		  //  int ans=0;
		  //  for(int i=0; i<n; i++)
		  //  {
		  //      vector<int> freq(26,0);
		  //      int maxi=0;
		  //      for(int j=i; j<n; j++)
    // 		    {
    // 		        freq[s[j]-'A']++;
    // 		        maxi=max(maxi,freq[s[j]-'A']);
    // 		        int length=j-i+1;
    // 		        if(length-maxi<=k)
    // 		        {
    // 		            ans=max(ans,length);
    // 		        }
    // 		    }
		  //  }
		  //  return ans;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends