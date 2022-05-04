class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set <int> res;
        int k = -1;
        for (auto &x : nums){
            if(res.find(x) != res.end()) res.erase(x);
            else res.insert(x);
        }
        k = *res.begin();
        return k;
    }
};