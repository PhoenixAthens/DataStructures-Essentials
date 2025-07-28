#include <iostream>
#include <vector>
#include <utility>
using std::cout;
using std::vector;
using std::pair;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> where;
        int rows = matrix.size();
        int columns = matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(matrix[i][j]==0)where.push_back({i,j});
            }
        }
        for(auto a: where){
            for(int i=0;i<columns;i++){
                matrix[a.first][i]=0;
            }
            for(int i=0;i<rows;i++){
                matrix[i][a.second]=0;
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
