/*TIME: O(n);MEMORY: 0(1)
  Algo: two pointers, at start i and j points at 0
  then start increasing j, if nums[j] is even swap nums[i] and nums[j] and increase i
  after all iteration first elements will be even*/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int> &A) {
        for (int i = 0, j = 0; j < A.size(); j++)
            if (A[j] % 2 == 0) swap(A[i++], A[j]);
        return A;
    }
    /*
    /* TIME: O(N); MEMORY: O(1)
    Algo: two pointers, at start i and j points at 0
    then while i < nums.size() if nums[i] is odd
    find position = j of next even element
    swap nums[i] and nums[j]
    increase i and j */
    /*
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = 0, tmp = 0;
        while(i < nums.size()){
            if(nums[i] % 2 != 0){
                while(j < nums.size() && nums[j] % 2 != 0){
                    j++;
                }
                if(j == nums.size()) return nums;
                tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
            i++;
            j++;
        }
        return nums;
    }
    */
};
