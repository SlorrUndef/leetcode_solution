class Solution {
public:
    int factorial(int n){
     return (n==0) || (n==1) ? 1 : n* factorial(n-1);
}
    int countNumbersWithUniqueDigits(int n) {
        int arr[n+1];
        arr[0] = 1;
        for (int i = 1; i <= n; i++){
            arr[i] = arr[i-1]+9*factorial(9)/factorial(10-i); // 9 variant to first digit, 9 variant to second digit, 8 for third, 7 for fourth and etc... 
        }
        return arr[n];
    }
};
