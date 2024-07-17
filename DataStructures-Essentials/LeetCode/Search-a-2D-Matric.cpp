#include <vector>
using std::vector;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int startO=0;
        int endO = matrix.size()-1;
        int startI = 0;
        int endI = matrix[0].size()-1;
        int midO;
        bool flag = false;
        while(startO<endO){
            midO = startO + (endO-startO)/2;
            if(target> matrix[midO][startI] && target < matrix[midO][endI]){
                flag = true;
                break;
            }else if(target > matrix[midO][endI] ){
                startO = midO+1;
            }else{
                endO = midO-1;
            }
        }
        if(!flag)midO = startO + (endO-startO)/2;
        while(startI<endI){
            int midI = startI + (endI-startI)/2;
            if(target == matrix[midO][midI]){
                return true;
            }else if(target > matrix[midO][midI] ){
                startI = midI+1;
            }else{
                endI = midI-1;
            }
        }
        return target == matrix[startO][startI];
    }
};
//Failing on the following test case
//[[1,3,5,7],[10,11,16,20],[23,30,34,50]]
//output (expected): true
//output (received): false
