/*TIME: O(n); MEMORY: O(1)
  Algo: check last digit of vector if last digit is < 9 then just increase last digit and return vector
  is last digit is 9 then put last digit = 0 and check previous digit;
  iterate throw vector if at the end of cycle we didn't return vector => all digits were equal 9
  now they all equal 0, so we can just increase first digit and push_back 0
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--){
            if (++digits[i] %= 10) return digits;
        }
        digits[0]++;
        digits.push_back(0);
        return digits;
    }
};