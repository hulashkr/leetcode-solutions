class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpp;
        for(auto i : magazine){
            mpp[i]++;
        }
        for(auto i : ransomNote){
            mpp[i]--;
        }
        for(auto it : mpp){
            if(it.second<0) return false;
        }
        return true;
    }
};