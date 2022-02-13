/*TIME: O(N); MEMORY: O(1)
  Algo: three can be equal to INT_MIN so i choose to use LLONG_MIN
  ordinary maximum finding
*/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long one = LLONG_MIN, two = LLONG_MIN, three = LLONG_MIN;
        for (auto &num : nums) {
            if (num == one || num == two || num == three)
                continue;
            if (num > one) {
                three = two;
                two = one;
                one = num;
            } else if (num > two) {
                three = two;
                two = num;
            } else if (num > three) {
                three = num;
            }
        }
        
        return three == LLONG_MIN ? one : three;
    }
};
