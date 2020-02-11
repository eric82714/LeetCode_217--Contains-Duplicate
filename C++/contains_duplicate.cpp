class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> hashmap;
        
        for(int i = 0; i < nums.size(); i++) {
            if(hashmap.find(nums[i]) != hashmap.end()) return true;
            hashmap[nums[i]] = 1;
        }
        
        return false;
    }
};
