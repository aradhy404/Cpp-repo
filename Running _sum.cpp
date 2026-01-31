class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int j = nums.size();

        for (int i = 0; i < j; i++) {
            int k = 0;
            for (int v = 0; v <= i; v++) {
                if (i != 0) {
                    k += nums[v];
                }
            }
            if (i == 0) {
                ans.push_back(nums[i]);
            } else {
                ans.push_back(k);
            }
        }
        return ans;
    }
};
