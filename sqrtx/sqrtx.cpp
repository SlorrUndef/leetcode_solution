class Solution {
public:
    int binarySearch(int n, int target){
        if(n == 0)
            return 0;
        int mid;
        int left = 0, right = n - 1;
        while(left <= right){
        // Prevent (left + right) overflow
            mid = left + (right - left) / 2;
            if (mid == 0){
                left = mid + 1;
                continue;
            }
            if(mid == target/mid){ return mid; }
            else if(mid < target/mid) { left = mid + 1; }
            else { right = mid - 1; }
        }
        if(mid < target/mid){
            mid = ceil(mid);
        } else{
            mid = floor(mid);
        }
        // End Condition: left > right
        return mid;
    }
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x < 4) return 1;
        int mid, left = 0, right = x;
        while(left < right){
            mid = left + (right-left)/2;
            if(mid == x/mid){       
                return mid;
            } else if(mid < x/mid){
                left = mid+1;
            } else{
                right = mid-1;
            }
        }
        return (left*left > x ? left-1 : left);
    }
};