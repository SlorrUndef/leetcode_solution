class Solution {
public:
//-----------------------------------------------------------
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0, right = arr.size() - k;
        vector<int> res;
        while(left < right){
            int mid = left + (right-left)/2;
            if(2*x > arr[mid+k] + arr[mid]){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        res = vector(arr.begin() + left, arr.begin() + left + k);
        return res;
    }
};