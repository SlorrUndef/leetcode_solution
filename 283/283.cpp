/*TIME: O(n);MEMORY: O(1)
  Algo: two pointers, at start i and j points 0
  go through vector and move all non-zero element advance
  we have j = position of first zero element
  replace with zero all elements j..n */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
    /*
    void moveZeroes(vector<int>& nums) {
        int i = 0, k = 0;
        while(i < nums.size()){
            if(nums[i] == 0){
                while(k < nums.size() && nums[k] == 0){
                    k++;
                }
                if(k == nums.size()) return;
                nums[i] = nums[k];
                nums[k] = 0;
            }
            i++;
            k++;
        }
    }
    */
};
