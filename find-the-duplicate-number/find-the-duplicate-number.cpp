class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size();
        while(left < right){
            int mid = left + (right-left)/2;
            int k = 0;
            //nums[mid]-1 elements must be less than nums[mid] if nums[mid] is unique
            //if p elements in left part than nums[mid]-p-1 elements in right part of vector 
            //if all elements unique, but we 1 element, which appears two or more times
            //if we have k >= nums[mid] --> elements from 1..nums[mid] candidates to be
            //duplicated
            for (int i = 0; i < nums.size(); ++i){
                if(nums[i] <= mid) k++;
            }
            if(k > mid){
                right = mid;
            } else{
                left = mid+1;
            }
        }
        return left;
    }
};