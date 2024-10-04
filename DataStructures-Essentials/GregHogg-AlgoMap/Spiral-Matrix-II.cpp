#include <vector>
using std::vector;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> store;
        int top=0;
        int right = matrix[0].size()-1;
        int bottom = matrix.size()-1;
        int left = 0;
        int cardinality = matrix[0].size()*matrix.size();
        while(store.size()<cardinality){
            for(int i=left;i<=right;i++){
                store.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                store.push_back(matrix[i][right]);
            }
            right--;
            for(int i=right;i>=left;i--){
                store.push_back(matrix[bottom][i]);
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                store.push_back(matrix[i][left]);
            }
            left++;
        }
        while(store.size()!=cardinality)store.pop_back();
        return store;
    }
};
