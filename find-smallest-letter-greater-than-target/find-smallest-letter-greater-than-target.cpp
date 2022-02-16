class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size();
        if (letters.back() <= target) return letters.front();
        while (left < right){
            int mid = left + (right-left)/2;
            if(letters[mid] <= target){
                left = mid +1;
            } else{
                right = mid;
            }
        }
        return (left == letters.size() ? letters[left-1] : letters[left]);
    }
};