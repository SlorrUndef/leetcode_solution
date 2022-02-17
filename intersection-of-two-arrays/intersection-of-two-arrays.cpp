/* TIME: O(n+m); MEMORY O(max(n,m))
   Algo: unordered set*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hs(nums1.begin(), nums1.end()); // average O(nums1.size())
        vector<int> res;
        for (auto &x : nums2) // O(nums2.size())
            if (hs.count(x)) { //average O(1)
                res.push_back(x); // average O(1)
                hs.erase(x); //average O(1)
            }
        return res;
    }
};