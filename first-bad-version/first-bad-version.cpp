// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
/*TIME: O(logn)
  Algo: left-binary search
*/
class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0, right = n, mid;
        while (left < right){
            int mid = left + (right - left) / 2;
            if(isBadVersion(mid)){
                right = mid;
            } else {
                left = mid+1;
            }
        }
        return left;
    }
};