/*TIME: O(logn)
  Algo: you have 2 sorted parts in array left part and right part;
  check in which part lies element (nums[mid]) and apply binary search
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