/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int mid, left = 0, right = n, k;
        while(left <= right){
            mid = left + (right - left)/2;
            k = guess(mid);
            if(k == 0) return mid;
            else if(k == 1) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};