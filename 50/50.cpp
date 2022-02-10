//no comments 
class Solution {
    public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        if(n<0){
            return 1/x * myPow(1/x, -(n + 1));
        }
        double tmp = myPow(x, n/2);
        if(n%2 == 0){
            return tmp*tmp;
        } else {
            return x*tmp*tmp;
        }
    }
};
