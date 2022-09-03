class Solution {
public:
    void solve(int num, int n, int k, vector<int> &ans){
        if(n==0){
            ans.push_back(num);
            return;
        }
        int ld=num%10;
        if(ld>=k){
            solve(num*10+ld-k,n-1,k,ans);
        }
        if(ld+k<=9 && k>0){
            solve(num*10+ld+k,n-1,k,ans);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        if(n==1) ans.push_back(0);
        for(int i=1; i<=9; i++){
            solve(i,n-1,k,ans);
        }
        return ans;
    }
};