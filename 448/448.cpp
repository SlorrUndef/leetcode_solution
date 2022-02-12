class Solution {
public:
    /*TIME: O(N); MEMORY: O(1)
      Algo: nums[nums[i]-1] = -1 for all i in 1..n
      after this index such that nums[i] != -1 is the missing number
    */
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int i = 0, tmp = 0;
        int n = nums.size();
        while(i < n){
            if(nums[i] != -1 && nums[nums[i] - 1] != -1){
                tmp = nums[i];
                swap(nums[i], nums[nums[i]-1]);
                nums[tmp-1] = -1;
            } else{
                i++;
            }
        }
        for(i = 0; i < n; ++i){
            if(nums[i] != -1) res.push_back(i+1);
        }
        return res;
    }
};
