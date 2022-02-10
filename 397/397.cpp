/*TIME : O(logn) MEMORY : O(1)*/
/*Algo: if n == 2^32 - 1 return 32
  else we have to look into binary form of n
  for example n = 11000010110
  if we devide by 2 then we just remove last zero: 11000010110 -> 1100001011
  now we have to choose n+1 or n-1, n-1 removes turn last 1 to 0: 1100001011-> 1100001010
  n+1 turn all stacked ones to zero: 1100001011-> 1100001100
  So algo is: if we can devide by 2, else look at last 2 digits of first is 0 then n-1 else n+1
  exeption is number 3, 3+1: 11-> 100-> 10 -> 1 
                        3-1: 11-> 10-> 1*/
class Solution {
public:
    int integerReplacement(int n) {
        int k = 0;
        if (n == INT_MAX) return 32;
        while(n > 1){
            if((n&1) == 0){
                n = n>>1;
            } else if(n == 3 || ((n>>1)&1) == 0){
                n--;
            } else{
                n++;
            }
            k++;
        }
        return k;
    }
};
