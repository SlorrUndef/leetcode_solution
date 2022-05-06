class Solution {
public:
    int myAtoi(string s) {
        int flag = 1, res = 0, i = 0;
        while (s[i] == ' ') { i++; }
        if (s[i] == '-') {
            flag = -1;
            i++;
        }
        else if (s[i] == '+') {
            flag = 1;
            i++;
        }
        
        while (s[i] >= '0' && s[i] <= '9') {
            if (res >  INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > 7)) {
                if (flag == 1) return INT_MAX;
                else return INT_MIN;
            }
            res  = 10 * res + (s[i++] - '0');
        }
        return res * flag;
    }
};