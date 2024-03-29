/*TIME: O(logn)
  Algo: left-binary search
*/
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size();
        if (letters[right-1] <= target) return letters[left];
        while (left < right){
            int mid = left + (right-left)/2;
            if(letters[mid] <= target){
                left = mid +1;
            } else{
                right = mid;
            }
        }
        return letters[left];
    }
};