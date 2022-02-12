/*TIME : O(n); MEMORY: O(1)
  Algo: go through vector and count number of digits in number nums[i]
  if num of digits % 2 is even increment counter
*/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int k = 0, m = 0;
        for(int i = 0; i < nums.size(); ++i){
            m = (nums[i]==0? 1: (int)(log10(nums[i]) + 1));
            if(m%2 == 0) k++;
        }
        return k;
    }
};
