/*TIME:0(N); MEMORY: O(1)
  Algo: two pointers, starting position k = 0, i = 1
  go through vector tring to find next different number
  if found nums[i] will be next different number
  increase k and change nums[k] to nums[i]
  return k+1
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int i = 1;
        while(i<nums.size()){
            if(nums[i] == nums[i-1]){
                i++;
            } else{
                nums[++k] = nums[i++];
            }
        }
        return k+1;
    }
};
