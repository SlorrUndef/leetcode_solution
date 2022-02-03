class Solution {
public:
    int minDistance(string word1, string word2) {
        int reduct_distance [word1.size() + 1][word2.size() + 1];
        for(int i = 0; i < word1.size()+1;++i){
            for(int j = 0; j < word2.size()+1;++j){
                if (i == 0 || j == 0) reduct_distance[i][j] = i + j;
                else if(word1[i-1] == word2[j-1]) reduct_distance[i][j] = reduct_distance[i-1][j-1];
                else reduct_distance[i][j] = min(reduct_distance[i-1][j], reduct_distance[i][j-1]) + 1;
            }
        }
        return reduct_distance[word1.size()][word2.size()];
    }
};
