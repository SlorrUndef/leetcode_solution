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