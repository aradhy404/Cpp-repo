class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
 bool l;
        unordered_set<int> u(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            auto it = u.find(nums[i]);
            if (it != u.end()) {
               
                l = true;
                break;

            } else {
                u.insert(nums[i]);
                l = false;
                
            }
        }
        return l;
    }
};
