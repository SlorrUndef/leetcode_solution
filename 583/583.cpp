class Solution {
public:
    /*TIME: O(word1.size()*word2.size()); SPACE = TIME*/
    int minDistance(string word1, string word2) {
        int reduct_distance [word1.size() + 1][word2.size() + 1]; /* reduct_distance[i][j] =  min(operation) for words {word1[0, 1,..., i] and word2[0, 1,..., j]}  */
        for(int i = 0; i < word1.size()+1;++i){
            for(int j = 0; j < word2.size()+1;++j){
                /* if one word empty => you have to make other word empty word.size() operations*/
                if (i == 0 || j == 0) reduct_distance[i][j] = i + j; 
                /*if words is not empty and last char is same then you have to work with words without this char's */
                else if(word1[i-1] == word2[j-1]) reduct_distance[i][j] = reduct_distance[i-1][j-1]; 
                /* if last char is different you have to delete from one of the word and add reduct_distant between deleteCharWord[0,...,i-1] and word[0...j]. */
                else reduct_distance[i][j] = min(reduct_distance[i-1][j], reduct_distance[i][j-1]) + 1; 
            }
        }
        return reduct_distance[word1.size()][word2.size()];
    }
};
