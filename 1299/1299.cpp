/*TIME:O(N); MEMORY: O(1)
  Algo: go through vector backward
  m at start is equal -1, then iterating through vector
  saving arr[i] value; arr[i] = m; m - max(m, saved arr[i])
*/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m = -1;
        for(int i = arr.size()-1; i>=0; i--) {
            int cur = arr[i];
            arr[i] = m;
            m = max(m, cur);
        }
        return arr;
    }
    /*
    BEER SOLUTION :)
    vector<int> replaceElements(vector<int>& arr) {
        int max = 0;
        int greatest = *max_element(arr.begin(), arr.end());
        for(int i = 0; i < arr.size() - 1; ++i){
            if (arr[i] == greatest){
                greatest = *max_element(arr.begin() + i + 1, arr.end());
            } 
            arr[i] = greatest;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
    */
};
