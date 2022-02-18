/*TIME: O(nlogn); MEMORY: O(1)
  Algo: vector contains only elements from 1..nums.size()-1; nums.size() = N
  so if we choose number MID from 1..N-1 in our vector MAXIMUM [MID] unique number can be less or equal
  so if we have more than [MID] numbers less or equal MID -> duplicated number lies in interval 1..MID
  else duplicated number lies in interval MID+1..N
  Complexity explanation: log n time binary search. in each binary search O(n) times count how much elements 
  less or equal
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size();
        while(left < right){
            int mid = left + (right-left)/2;
            int k = 0;
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