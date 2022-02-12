/*TIME : O(n+m); MEMORY O(1)
  Algo : a[m+1]...a[m+n] === 0. This means that we can go backward (reducing n and m)
  throw vector a and b and save greater value in a[m+n]
  NOTE: we don't have to track m value becouce as soon as n = 0 => left m values of vector a already sorted
*/
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
    while(n!=0) 
        a[m + n] = (m > 0 && a[m - 1] > b[n - 1])? a[--m] : b[--n];
    }
};
