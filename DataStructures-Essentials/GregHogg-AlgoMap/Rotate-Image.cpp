#include <vector>
using std::vector;
using std::swap;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int k = matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<k/2;j++){
                swap(matrix[i][j],matrix[i][k-j-1]);
            }
        }
    }
};
