#include <vector>
using std::vector;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]{false};
        bool col[9][9]{false};
        bool boxes[9][9]{false};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num=(board[i][j]-'0')-1;
                    int boxIndex = j/3 + (i/3)*3;
                    if(row[i][num] || col[j][num] || boxes[boxIndex][num]){
                        return false;
                    }
                    row[i][num]=true;
                    col[j][num]=true;
                    boxes[boxIndex][num]=true;
                }
            }
        }
        return true;
        
    }
};
