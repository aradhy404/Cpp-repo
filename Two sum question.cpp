class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> v;
        for(int i = 0;i<nums.size();i++){
            int k = target-nums[i] ;
            if(v.find(k)!=v.end()){
                return {v[k], i};
            }
            v[nums[i]] = i;
        }
        return {};
    }
};
