/*TIME: O(n) worst; O(logn) average; MEMORY: O(1)
  Algo: we have two sorted parts in vector; answer element will be element who was first in unrotated vector
  if (nums[mid] < nums[0]) then mid and 0 in different part so we reducing right pointer
  else if (nums[mid] > nums[0]) we live in same part so we need to go in another part so we need to increase       left pointer
  else (nums[mid] == nums[0]) we may live either in same or different parts of array; so we need to increase       left pointer by 1 and save value that were in nums[left] it can be minimum of the array;
  after binary search minimum may be k or nums[left]
*/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size(), k = nums[0];
        while(left < right){
            int mid = left + (right-left)/2;
            if(nums[mid] < nums[0]){ // [0, mid]
                right = mid;
            } else if(nums[mid] > nums[0]){
                left = mid + 1;
            } else{
                k = min(k, nums[left]);
                left++;
            }
        }
        if(left == nums.size() || k < nums[left]) return k; 
        return nums[left];
    }
};