/*TIME: O(log(n-k) + k); MEMORY: O(k)
  Algo: we need to find an interval such that the distance from x to the center of the interval is minimal and x lies to     the right or in the center of the interval. We can do it with binary search: O(log(n-k)); then we need to push k elements   to res vector : O(k)
*/
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0, right = arr.size() - k;
        while(left < right){
            int mid = left + (right-left)/2;
            // x > (arr[mid+k]+arr[mid])/2; (arr[mid+k]+arr[mid])/2 - center of interval 
            if(2*x > arr[mid+k] + arr[mid]){ 
                left = mid + 1; //move interval to the right (to minimize distance)
            }else{
                right = mid; //move interval to the left (to make x lie to the right or in the center of the interval)
            }
        }
        vector<int> res = {arr.begin() + left, arr.begin() + left + k};
        return res;
    }
};