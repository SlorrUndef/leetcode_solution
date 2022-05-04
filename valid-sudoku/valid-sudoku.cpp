class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string, int> hash;
        for (int row = 0; row < 9; ++row){
            for(int col = 0; col < 9; ++col){
               if(board[row][col] != '.'){
                   string Row = "row" + to_string(row) + to_string(board[row][col]);
                   string Col = "col" + to_string(col) + to_string(board[row][col]);
                   int box = (row/3) * 3 + (col/3);
                   string Box = "box" + to_string(box) + to_string(board[row][col]);
                   if(!hash[Row] && !hash[Col] && !hash[Box]){
                       hash[Row] = 1;
                       hash[Col] = 1;
                       hash[Box] = 1;
                   }
                   else return false;
               } 
            }
        }
        return true;
    }
};