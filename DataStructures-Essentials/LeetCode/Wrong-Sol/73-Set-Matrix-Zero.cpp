#include <vector>
#include <iostream>
using std::cout;
using std::vector;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<cols;k++){
                        matrix[i][k]=0;
                    }
                    for(int k=0;k<rows;k++){
                        matrix[k][j]=0;
                    }
                    continue;
                }
            }
        }
    }
};
int main(){
    Solution s;
    vector<vector<int>> v{{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> v2{{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    s.setZeroes(v);
    for(auto i: v){
        for(int j : i){
            cout << j << ",";
        }
        cout<<"\n";
    }
    s.setZeroes(v2);
    for(auto i: v2){
        for(int j : i){
            cout << j << ",";
        }
        cout<<"\n";
    }
}
