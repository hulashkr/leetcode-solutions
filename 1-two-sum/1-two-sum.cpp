class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(auto i = nums.begin(); i!=nums.end(); i++){
            auto j=find(i+1,nums.end(),target-*i);
            if(j!=nums.end()){
                res.push_back(i-nums.begin());
                res.push_back(j-nums.begin());
            }
        }
        return res;
    }
};