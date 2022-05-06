class Solution{
public:
    string longestPalindrome(string s){
        int n = s.size();
        if (n == 0)
            return "";
        vector<vector<bool>> dp(n, vector<bool>(n, 0));

        //if 1 char => palindrome
        for (int i = 0; i < n; i++)
            dp[i][i] = true;

        string ans = "";
        ans += s[0];

        for (int i = n - 2; i >= 0; i--){
            for (int j = i + 1; j < n; j++){
                if (s[i] == s[j]){
                    //if it is of two character OR if its susbtring from i+1 to j-1 is palindrome.
                    if (j - i == 1 || dp[i + 1][j - 1] == true){
                        dp[i][j] = true;
                        //check size of substring
                        if (ans.size() < j - i + 1)
                            ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;
    }
};