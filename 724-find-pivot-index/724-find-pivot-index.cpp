/*TIME: O(n); MEMORY: O(1)
  Algo: two pointers, l is sum of all elements that left of pivot
  r is sum of elements that right of pivot; at start calculate r as sum of all elements
  then subtrack pivot element from r and check if l is equal to r
  if true return index else add pivot to l and increment index
*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0;
        int r = 0;
        for(auto &x:nums){
            r+=x;
        }
        /*r is sum of all elements of array*/
        for (int i = 0; i < nums.size(); ++i){
            r -= nums[i];
            if(r == l){
                return i;
            }
            l += nums[i];
        }
        return -1;
    }
};