class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ;i<nums.size();i++){
            auto it = nums[nums[i]];
            ans.push_back(it);
        }
        return ans;
    }
};
