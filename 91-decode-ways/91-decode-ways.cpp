class Solution {
public:
    int solve(int i,string s,vector<int> &dp){
        if(s[i]=='0') return 0;
        if(i==s.size()) return 1;
        if(dp[i]!=-1) return dp[i];
        int oneDigit = solve(i+1,s,dp);
        int twoDigit = 0;
        if(i<s.size()-1 && ((s[i]=='1' && s[i+1]<='9') || (s[i]=='2' && s[i+1]<='6'))){
            twoDigit += solve(i+2,s,dp);
        }
        return dp[i] = oneDigit + twoDigit;
    }
    int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        return solve(0,s,dp);
    }
};