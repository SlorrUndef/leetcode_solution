/*TIME:O(logn)
  Algo: left-binary search elements such that a*a == x
  if we didn't found check if left*left > x return left-1 else return left
*/
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x < 4) return 1;
        int mid, left = 0, right = x;
        while(left < right){
            mid = left + (right-left)/2;
            if(mid <= x/mid){
                left = mid+1;
            } else{
                right = mid;
            }
        }
        return (left > x/left ? left-1 : left);
    }
};