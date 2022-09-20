class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int ans=0;
        for(int i=-m+1; i<n; i++){
            int cnt=0;
            for(int j=0; j<m; j++){
                if(i+j<0) continue;
                else if(i+j>=n) break;
                else if(nums1[i+j]==nums2[j]){
                    cnt++;
                    ans=max(ans,cnt);
                }
                else cnt=0;
            }
        }
        return ans;
    }
};