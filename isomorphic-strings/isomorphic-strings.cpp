class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char, char> hash;
        for(int i = 0; i < s.size(); ++i){
            if(hash.count(s[i]) > 0){
                if(hash[s[i]] != t[i]) return false;
            }
            hash[s[i]] = t[i];
        }
        hash.clear();
        for(int i = 0; i < s.size(); ++i){
            if(hash.count(t[i]) > 0){
                if(hash[t[i]] != s[i]) return false;
            }
            hash[t[i]] = s[i];
        }
        return true;
    }
};