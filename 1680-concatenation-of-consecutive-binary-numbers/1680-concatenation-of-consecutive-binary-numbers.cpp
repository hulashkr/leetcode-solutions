class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans=0;
        long long MOD = 1e9+7;
        for(int i=1; i<=n; i++){
            int x = log2(i)+1;
            ans= ((ans<<x)%MOD + i)%MOD;
        }
        return ans;
    }
};