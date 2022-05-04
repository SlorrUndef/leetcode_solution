class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> hash;
        vector<int> res;
        for(auto &x : nums1){
            hash[x]++;
        }
        for(auto &x : nums2){
            if(hash[x] > 0){
                hash[x]--;
                res.push_back(x);
            }
            
        }
        return res;
    }
};