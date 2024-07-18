#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

int findTheSum(int** arr, int rows, int columns, int* dimension){
    vector<vector<int>> vec(rows+1, vector<int>(columns+1));
    for(int i=1;i<rows+1;i++){
        for(int j=1;j<columns+1;j++){
            vec[i][j]= arr[i-1][j-1]+vec[i-1][j] + vec[i][j-1] - vec[i-1][j-1];
        }
    }
    return 0;
}

class NumMatrix {
    vector<vector<int>> sumMatrix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size()+1;
        int cols = matrix[0].size()+1;
        sumMatrix = vector<vector<int>>(rows,vector<int>(cols));
        for(int i = 1;i<rows;i++){
            for(int j = 1; j<cols;j++){
                sumMatrix[i][j] = matrix[i-1][j-1] + sumMatrix[i-1][j] + sumMatrix[i][j-1] - sumMatrix[i-1][j-1];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return sumMatrix[row2+1][col2+1] - sumMatrix[row1][col2+1] - sumMatrix[row2+1][col1] + sumMatrix[row1][col1];
    }
};

