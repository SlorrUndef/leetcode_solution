/*TIME: O(logn)
  Algo: With scrutiny on a rotated sorted array, it's not hard to find that for every index i, either the part [0, i] is sorted or the part [i, n - 1] is sorted.
The idea is that we can always divide the array into two parts L, R. If L is sorted and the key is in the range we can simply throw R away, if key is not in the range then we know the key must be in the unsorted part(i.e. R). If key is in R, we are back to the same problem with the size halved, so we can apply the same idea on R.
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;   
        int right = nums.size() - 1; 
        while(left <= right){
           int mid = left + (right - left) / 2;
           if(target == nums[mid])
               return mid;
           
           if(nums[left] <= nums[mid]){ //we are in left part 
              if(target <= nums[mid] && target >= nums[left]) // check if target is between this range
                  right = mid - 1;
               else
                   left = mid + 1;
           }

           else{ // we are in right part
               if(target >= nums[mid] && target <= nums[right]) // check if target is between this range
                  left = mid + 1;
               else
                   right = mid - 1;
           }
       }
       return -1;
    }
};