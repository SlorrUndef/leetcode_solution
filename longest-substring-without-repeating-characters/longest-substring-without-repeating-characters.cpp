class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, left = 0, right = 0;
        unordered_map <char, int> hash;
        while(right < s.size()){
            if(hash[s[right]] > left) {
                left = (left < hash[s[right]] ? hash[s[right]] : right + 1);
            }
            hash[s[right]] = right + 1;
            right++;
            res = max(res, right - left);
            // cout << res << "," << left << "," << right << endl;
        }
        
        return res;
    }
};