/* TIME : O(n), MEMORY : O(1) */
/* Algorithm: 
Notation: nums[i] = c; nums[i-1] = b; nums[i-2] = a;
In the course of the algorithm, we change the array:
there are two candidates for substitution: nums[i] and nums[i-1]
the choice is as follows: if c < b
the array follows a <= b > c
now we have to replace either b or c, if c > a, 
then the optimal replacement is the replacement of b by c, 
if we change c to b, then the next element after c (nums[i+1]) may be less than b*/
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int k = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1]){
                if(i >= 2 && nums[i] > nums[i-2]){
                    nums[i-1] = nums[i];
                    k++;
                } else if(i >= 2 && nums[i] < nums[i-2]){
                    nums[i] = nums[i-1];
                    k++;
                } else {
                    nums[i-1] = nums[i];
                    k++;
                }
            } 
            if(k > 1) return false;
        }
        return true;
    }
};
