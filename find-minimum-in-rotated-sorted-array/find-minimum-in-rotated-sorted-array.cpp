/*TIME: O(logn)
  Algo: we have two sorted parts in vector; answer element will be element who was first in unrotated vector
  if (nums[mid] < nums[0]) then mid and 0 in different part so we reducing right pointer
  else we live in same part so we need to go in another part so we need to increase left pointer
  CORNER CASE: if vector wasn't rotated nums[mid] > nums[0] for any mid; so left will be equal to nums.size()
  and if so we can just return nums[0] as min element
*/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size();
        while(left < right){
            int mid = left + (right-left)/2;
            if(nums[mid] < nums[0]){ // [0, mid]
                right = mid;
            } else{
                left = mid + 1;
            }
        }
        return (left == nums.size() ? nums[0] : nums[left]);
    }
};