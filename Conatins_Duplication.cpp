class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        multiset<int> s;
        bool l;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            auto k = s.find(nums[i]);
            s.erase(k);
            auto p = s.find(nums[i]);
            if (p != s.end()) {
              l = true;
            } else {
               l = false;
            }
            if(l==true){
                break;
            }
        }
        return l;
    }
};
