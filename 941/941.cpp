/*TIME: O(n); Memory O(1)
  Algo: find index of array maxElement
  if maxElement is first or last => return false
  go through vector if elements before maxElement not strictly increasing return false
  same for elements after maxElement
*/
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int index = max_element(arr.begin(),arr.end()) - arr.begin(); // index of max_element
        int i = 1;
        if (arr.size() < 3) return false;
        if(index == 0 || index == arr.size() - 1) return false;
        while (i < arr.size()){
            if(i <= index){
                if(arr[i] <= arr[i-1]) return false;
            } else {
                if(arr[i] >= arr[i-1]) return false;
            }
            i++;
        }
        return true;
    }
};
