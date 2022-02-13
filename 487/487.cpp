/*Given a binary array, find the maximum number of consecutive 1s in this array if you can flip at most one 0.

Example 1:

Input: [1,0,1,1,0]
Output: 4
Explanation: Flip the first zero will get the the maximum number of consecutive 1s.
    After flipping, the maximum number of consecutive 1s is 4.
//---------------------------------
TIME: O(N); MEMORY O(1)
Algo: go through vector and increase k
if we found zero save k into p then reset k to zero // this means that we flipped this zero
and update maximum with previous maximum and k+p
if next element won't be equal zero -> then k will increase // this means that we flipped this zero
and maximum will be more then p // this means that we flipped this zero
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0, p = 0, k = 0;
        for (int i = 0; i < nums.size(); i ++) {
            k++;
            if (nums[i] == 0) {
                p = k;
                k = 0;
            } 
            m = max(m, p + k);
        }
        return m;
    }
};
