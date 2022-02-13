/*Time: O(n); Memory: O(n)
  Algo: create unordered_set, insert {O(1)} FIRST element
  if(nums[i] is even tries to find {O(1)} nums[i]/2 for odd numbers nums[i]/2 is floating point number
  and try to find {O(1)} 2*nums[i]
  insert nums[i] in unordered_set
*/
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;
        st.insert(arr[0]);
        for(int i = 1; i < arr.size(); ++i){
            if(arr[i]%2 == 0){
                if(st.find(arr[i]/2) != st.end()) return true;
            }
            if(st.find(2*arr[i]) != st.end()) return true;
            st.insert(arr[i]);
        }
        return false;
    }
};
