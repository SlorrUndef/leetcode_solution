/*TIME: O(n); MEMORY: O(1)
  Algo: two pointers, starting position l = 0, r = nums.size()-1
  while(l <= r) if nums[l] == val then swap nums[l] and nums[r] and decrease r
                else just increase l
  what will happen if nums[r] == val? We decreasing r and doesn't touching l
  so after swaping nums[l] still will be equal to val so we will swap again and again until we won't swap with nums[r] != val
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = nums.size()-1;
        if(nums.size() == 0) return 0;
        while(l <= r){
            if(nums[l] == val){
                nums[l] = nums[r];
                r--;
            }else{
                l++;
            }
        }
        return l;
    }
};
