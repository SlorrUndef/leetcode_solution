/*TIME: O(n) worst; O(logn) average; MEMORY: O(1)

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