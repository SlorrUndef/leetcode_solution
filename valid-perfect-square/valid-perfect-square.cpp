/*Algo: left-binary search*/
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        int mid, left = 0, right = num;
        while(left < right){
            mid = left + (right-left)/2;
            if (mid <= num/mid) left = mid + 1;
            else right = mid;
        }
        return ((left-1)*(left-1) == num ? true : false);
    }
};