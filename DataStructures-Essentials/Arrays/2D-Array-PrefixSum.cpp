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
