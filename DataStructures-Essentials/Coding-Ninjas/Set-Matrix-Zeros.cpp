#include <iostream>
#include <vector>
#include <utility>
using std::vector;
using std::cout;
using std::pair;

void setZeros_0(vector<vector<int>> &matrix){
    vector<pair<int,int>> removal;
    for(int i=0;i<matrix.size();i++){
        bool flag = false;
        int j=0;
        for(;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                removal.push_back({i,j});
                break;
            }
        }
    }
    for(auto rem: removal){
        for(int cols=0;cols<matrix[0].size();cols++){
            matrix[rem.first][cols]=0;
        }
        for(int row=0;row<matrix.size();row++){
            matrix[row][rem.second]=0;
        }
    }
}
