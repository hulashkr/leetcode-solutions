class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            int cnt=0;
            int num=i;
            while(num){
                if(num&1) cnt++;
                num=num>>1;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};