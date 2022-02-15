/*TIME: O(1); MEMORY O(1)
  Algo: sum elements from start until we get sum greater than or equal target;
  Then remove elements from start of our sum, until we greater than or equal target;
  and save length of sum; 
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int k = 0, p = INT_MAX;
        int sum = 0, first = 0, i = 0;
        while(i < nums.size()){
            if(sum < target){
                if(k == 0) first = i; 
                sum += nums[i++];
                k++;
            } else{
                while(sum >= target){
                    sum -= nums[first++];
                    k--;
                }
                p = min(p,k+1);
            }
        }
        if(sum >= target) {
            while(sum >= target){
                    sum -= nums[first++];
                    k--;
                }
                p = min(p,k+1);
        }
        return (p == INT_MAX ? 0 : p);
    }
};