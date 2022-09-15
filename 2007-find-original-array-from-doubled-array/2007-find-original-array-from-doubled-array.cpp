class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2) return {};
        unordered_map<int,int> ump;
        for(auto i : changed){
            ump[i]++;
        }
        vector<int> temp;
        for(auto it : ump){
            temp.push_back(it.first);
        }
        sort(temp.begin(),temp.end());
        vector<int> ans;
        for(auto i : temp){
            if(ump[i]>ump[2*i]) return {};
            for(int j=0; j<ump[i]; j++){
                ans.push_back(i);
                ump[2*i]--;
            }
            
        }
        return ans;
    }
};