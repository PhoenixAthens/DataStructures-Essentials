#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> v(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[grid[i][j]-1]++;
            }
        }
        vector<int> res(2);
        for(int i=0;i<n*n;i++){
            if(v[i]==0)res[1]=i+1;
            else if(v[i]==2)res[0]=i+1;
        }
        return res;
    }
};
int main(){
    Solution s
}
