class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int temp=neededTime[0],maxi=neededTime[0];
        for(int i=1; i<n ;i++){
            if(colors[i]!=colors[i-1]){
                temp-=maxi;
                maxi=0;
            }
            temp+=neededTime[i];
            maxi=max(maxi,neededTime[i]);
        }
        return temp-maxi;
    }
};