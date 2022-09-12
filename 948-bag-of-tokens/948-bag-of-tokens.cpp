class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int currScore=0,ans=0;
        int s=0,e=n-1;
        while(s<=e){
            if(power>=tokens[s]){
                power-=tokens[s];
                currScore++;
                ans=max(ans,currScore);
                s++;
            } 
            else if(currScore>0){
                currScore--;
                power+=tokens[e];
                e--;
            } 
            else break;
        }
        return ans;
    }
};