/*TIME: O(n*m); MEMORY: O(1)
The first diagonal is (0, 0). The second is (0, 1), (1, 0), the third is (2, 0), (1, 1), (0, 2), etc.

It should be clear that the sum of row i and column j is equal to the index of the diagonal (diagonal number - 1). e.g. for the second diagonal (index 1), all possible pairings of (i, j) sum to 1, i.e. i + j = 1 for the 2nd diagonal. The maximum diagonal index is simply ((N-1) + (M-1)) = N + M - 2

So to solve the problem we simply need iterate through all possible diagonal indices (denote this as s) and find all possible pairs (i, j) such that i + j = s. The only thing we need to concern ourselves about is the order. We can find the ordering by looking at whether the diagonal index is even or odd. When the diagonal index is even we want to the first pair to be (s, 0) and when it is odd when want the first pair to be (0, s), and we decrease or increase i/j by 1 accordingly.
*/
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {};
        
        const int N = matrix.size();
        const int M = matrix[0].size();
        
        vector<int> res;
        for(int s = 0; s <= N + M - 2; ++s)
        {
            // for all i + j = s
            for(int x = 0; x <= s; ++x) 
            {
                int i = x;
                int j = s - i;
                if(s % 2 == 0) swap(i, j);

                if(i >= N || j >= M) continue;
                
                res.push_back(matrix[i][j]);
            }
        }
        
        return res;
    }
    /* MY SOLUTION
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector <int> res;
        int k = 1, i = 0, j = 0;
        res.push_back(mat[i][j]);
        while(k < n+m-1){
            if(k%2 == 1){
                if(j != n-1){
                    j++;
                } else{
                    i++;
                }
                while(i<m && i<=k){
                    res.push_back(mat[i][j]);
                    i++;
                    j--;
                }
                i--;
                j++;
            } else{
                if(i != m-1){
                    i++;
                } else{
                    j++;
                }
                while(j<n && j<=k){
                    res.push_back(mat[i][j]);
                    j++;
                    i--;
                }
                j--;
                i++;
            }
            k++;
        }
        return res;
    } */
};