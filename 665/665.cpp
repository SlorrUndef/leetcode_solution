/* TIME : O(n), MEMORY : O(1) */
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int k = 0; // number of changes
        for(int i = 1; i < nums.size() && k<=1 ; i++){
            if(nums[i-1] > nums[i]){
                k++;
                if(i-2<0 || nums[i-2] <= nums[i]) nums[i-1] = nums[i]; //in order not to change other comparisons, we change nums[i-1] to nums[i]       
                else nums[i] = nums[i-1]; //We have to change nums[i]
            }
        }
        return k<=1;
    } 
};
