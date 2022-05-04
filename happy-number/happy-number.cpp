class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> res;
        int sum = n;
        while(sum != 1){
            if(res.find(sum) != res.end()) return false;
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