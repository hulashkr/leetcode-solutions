class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int n=properties.size();
        int m=properties[0].size();
        sort(properties.begin(),properties.end(),comp);
        int cnt=0;
        int max_defense=INT_MIN;
        for(int i=n-1; i>=0; i--){
            if(properties[i][1]>max_defense) max_defense=properties[i][1];
            if(properties[i][1]<max_defense) cnt++;
        }
        return cnt;
    }
};