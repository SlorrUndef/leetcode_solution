class Solution {
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        vector<int> res;
        
        for(auto &x : nums) hash[x]++;
        vector<pair<int, int>> v(hash.begin(), hash.end());
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < k; i++)
            res.push_back(v[i].first);
        return res;
    }
};