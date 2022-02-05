/* DP Solution Time: O(nsqrt(n)); Memory: O(n) */
class Solution {
public:
    int numSquares(int n){
        vector<int>dp(n+1,INT_MAX);
        dp[0] = 0;
        dp[1] = 1;
        /* Idea of DP: i run from 1..n+1, dp[i*i] = 1; if dp[i] = min{dp[i-sq]+1} min for all perfect squares < i */
        for(int i = 1; i <= n; i++){
            if(i*i<=n) dp[i*i] = 1;
            for(int j = 1; j*j < i; j++){
                dp[i] = min(dp[i-j*j]+1, dp[i]);
            }
        }
        return dp[n];
    }
};
