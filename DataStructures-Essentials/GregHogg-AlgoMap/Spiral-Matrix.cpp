#include <vector>
#include <iostream>
using std::cout;
using std::vector;

class Solution {
public:
    void traverse(vector<vector<int>> main, vector<int>& store, int row, int column){
        for(int i=column;i<main[0].size()-column;i++){
            store.push_back(main[row][i]);
        }
        int col = main[0].size()-column-1;
        for(int i=row+1;i<main.size()-row;i++){
            store.push_back(main[i][col]);
        }
        int r = main.size()-1-row;
        for(int i=main[0].size()-column-2;i>=column;i--){
            store.push_back(main[r][i]);
        }
        for(int i=main.size()-row-2;i>row;i--){
            store.push_back(main[i][column]);
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> store;
        int size = matrix.size()*matrix[0].size();
        int i=0
        while(store.size()<size){
            traverse(matrix, store, i, i);
            i++;
        }
        while(store.size()!=size)store.pop_back();
        return store;
    }
    
};
int main(int argc, char** argv){
    vector<vector<int>> main {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        //{13,14,15,16}
    };
    
    Solution s;
    //s.traverse(main, store, 0, 0);
    vector<int> store = s.spiralOrder(main);
    for(int i: store){
        cout << i << " ";
    }
    cout << "\n";
}
