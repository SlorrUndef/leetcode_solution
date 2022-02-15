/*TIME: O(rowIndex^2); MEMORY: O(rowIndex)
  Algo: iteratively update the array from the end to the beginning.
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1, 0);
        res[0] = 1;
        for(int i=1; i<rowIndex+1; i++)
            for(int j=i; j>=1; j--)
                res[j] += res[j-1];
        return res;
    }
};