/*TIME: O(n); MEMORY: O(1)
  Algo: two pointers; calculate sum of last and first element.
  if we got target num return; else decrease pointer on last element or increase pointer of first element;
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        while (i < j){
            if (numbers[i] + numbers[j] == target){
                return {i+1, j+1};
            } else if(numbers[i] + numbers[j] > target) j--;
            else i++;
        }
        return{0,0};
    }
};