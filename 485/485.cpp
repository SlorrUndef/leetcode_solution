/*TIME: O(n); MEMORY: O(1)
 Algo: go through vector and save maximum number of consecutive 1 
 if nums[i] == 0 then save maximum and reset iterator
 */
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k = 0;
        int m = -1;
        for (int i = 0; i<nums.size(); ++i){
            if(nums[i]==0){
                m = max(k, m);
                k = 0;
                continue;
            }
            k++;
        }
        m = max(k,m);
        return m;
    }
};
