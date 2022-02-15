class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector <int> res;
        int k = 1, i = 0, j = 0;
        res.push_back(mat[i][j]);
        while(k < n+m-1){
            if(k%2 == 1){
                if(j != n-1){
                    j++;
                } else{
                    i++;
                }
                while(i<m && i<=k){
                    res.push_back(mat[i][j]);
                    i++;
                    j--;
                }
                i--;
                j++;
            } else{
                if(i != m-1){
                    i++;
                } else{
                    j++;
                }
                while(j<n && j<=k){
                    res.push_back(mat[i][j]);
                    j++;
                    i--;
                }
                j--;
                i++;
            }
            k++;
        }
        return res;
    }
};