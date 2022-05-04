class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>res;
        unordered_map<string,int>hash;
        int min = INT_MAX;
        for(int i = 0; i < list1.size(); i++) hash[list1[i]] = i;
        for(int i = 0; i < list2.size(); i++)
            if(hash.count(list2[i]) != 0)
                if(min > hash[list2[i]] + i) {
                    min = hash[list2[i]] + i;
                    res.clear();
                    res.push_back(list2[i]);
                }
                else if(hash[list2[i]] + i == min) res.push_back(list2[i]);
        return res;
    }
    // vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    //     vector<string> res;
    //     unordered_map <string, int> hash;
    //     int k = INT_MAX, t = 0;
    //     for(int i = 0; i < list1.size(); ++i){
    //         hash[list1[i]] = i;
    //     }
    //     for(int i = 0; i < list2.size(); ++i){
    //         if(hash.count(list2[i]) > 0) {
    //             hash[list2[i]] += i;
    //             if(k > hash[list2[i]]){
    //                 k = hash[list2[i]];
    //             }
    //         }
    //     }
    //     for(int i = 0; i < list2.size(); ++i){
    //         if(hash.count(list2[i]) > 0) {
    //             if(hash[list2[i]] == k){
    //                 res.push_back(list2[i]);
    //             }
    //         }
    //     }
    //     return res;
    // }
};