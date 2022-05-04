/*row #n is row#n-1 + row#n-1 with reversed bits
  number of elements in row#n pow(2, n-1)
  if k < pow(2,n-1) => we can seach in previus row
  else we take k-pow(2,n-2) bit of n-1 row and reverse it
*/
class Solution {
public:
    int kthGrammar(int N, int K) {
        
        if (N == 1 && K == 1)
            return 0;
        
        if (K <= pow(2, N-2))
            return kthGrammar(N-1, K);
        else
            return !kthGrammar(N-1, K-pow(2, N-2));
    }
};