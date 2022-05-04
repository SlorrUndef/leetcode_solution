/*
Do summation of square of each digit and store the sum in hashset.
Repeat step 1 until sum becomes 1 and every time check if value exists in hashset or not.
If exists (we are in loop) then return false otherwise continue.
*/
class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> res;
        int sum = n;

        while(sum != 1){
            if(res.find(sum) != res.end()) return false; //
            res.insert(sum);
            
            sum = 0;
            while(n){
                int lastDigit = n%10;
                sum += pow(lastDigit,2);
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};