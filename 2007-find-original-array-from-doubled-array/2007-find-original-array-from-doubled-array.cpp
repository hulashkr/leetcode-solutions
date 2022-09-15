class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(),changed.end());
        int n=changed.size();
        if(n%2) return {};
        unordered_map<int,int> mp;
        for(auto i : changed){
            mp[i]++;
        }
        vector<int> ans;
        for(auto i : changed){
            if(mp[i]==0){
                continue;
            }
            if(mp[2*i]==0){
                return {};
            }
            if(mp[i] && mp[2*i]){
                mp[2*i]--;
                ans.push_back(i);
                mp[i]--;
            }
        }
        return ans;
    }
};