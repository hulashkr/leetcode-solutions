//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool static comp(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.first>p2.first) return true;
        else if(p1.first==p2.first)
        {
            if(p1.second>p2.second) return true;
        }
        return false;
        
    }
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> vp;
        for(auto it:mp)
        {
            vp.push_back({it.second,it.first});
        }
        sort(vp.begin(),vp.end(),comp);
        // for(auto x:vp) cout<<x.first<<"->"<<x.second<<" ";
        // cout<<"\n";
        vector<int> ans;
        for(auto x:vp)
        {
            if(k>0)
            {
                ans.push_back(x.second);
                k--;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends