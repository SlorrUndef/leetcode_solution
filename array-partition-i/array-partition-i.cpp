/*TIME: O(nlogn); MEMORY: O(1)
  Algo: sort array and make pairs with minimum difference,
  for example make pair of (k-th maximum, k-1 maximum)
*/
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        for(int i = nums.size()-1; i>0; i-=2){
            res += min(nums[i], nums[i-1]);
        }
        return res;
    }
};