class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> hash;
        for(int i = 0; i < nums.size(); ++i){
            if(hash.count(nums[i]) > 0){
                if (abs(hash[nums[i]] - i) <= k) return true;
            }
            hash[nums[i]] = i;
        }
        return false;
    }
};