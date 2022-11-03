class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> mp;
        for(auto x : words){
            mp[x]++;
        }
        bool flag=false;
        int ans=0,res=0;
        for(auto it : mp){
            if(it.first[0]==it.first[1]){
                if(it.second%2){
                    flag=true;
                    res+=it.second-1;
                }
                else res+=mp[it.first];
                mp.erase(it.first);
            }
            else{
                string s=it.first;
                 reverse(s.begin(),s.end());
                 if(mp.find(s)!=mp.end())
                 {
                     ans+=min(mp[s],it.second)*4;
                 }
                 mp.erase(s);
                 mp.erase(it.first);
            }
            
        }
        if(flag) return ans+res*2+2;  
         return ans+res*2;
    }
};