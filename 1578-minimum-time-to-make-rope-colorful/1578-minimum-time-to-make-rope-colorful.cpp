class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int sum=0;
        for(int i=1; i<n ;i++){
            if(colors[i]==colors[i-1]){
                if(neededTime[i]<neededTime[i-1]) sum+=neededTime[i];
                else sum+=neededTime[i-1];
                if(neededTime[i-1]>neededTime[i]) swap(neededTime[i-1],neededTime[i]);
            }
            else continue;
            cout<<sum<<" & ";
        }
        return sum;
    }
};