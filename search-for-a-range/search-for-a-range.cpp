/*TIME: O(logn)
  Algo: left-binary search + right-binary search
  left-binary search will find first index of element
  right-binary search will find last index of element
*/
class Solution {
public:
    //left-binary search
    int findLeft(vector<int> &A, int T){
        int N = A.size();
        int low = 0, high = N-1;
        while(low < high){
            int mid = (high-low)/2 + low;
            
            if(A[mid] < T) low = mid+1;
            
            else high = mid;
            
        }
        return A[high] == T ? high : -1;
    }
//---------------------------------------
    //right-binary search
    int findRight(vector<int> &A, int T){
        int N = A.size();
        int low = 0, high = N-1;
        while(low < high){
            int mid = (high-low+1)/2 + low;
            
            if(A[mid] > T) high = mid-1;
            
            else low = mid;
            
        }
        return A[low] == T ? low : -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1,-1}; //corner case
        vector<int> v = {findLeft(nums,target), findRight(nums,target)};
        return v;
    }
};