#include <iostream>
using std::cout;
using std::cin;
//using std::max;
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(n==1 || m==1){
            return 1;
        }else{
            return uniquePaths(m, n-1)+uniquePaths(m-1, n);
        }
    }
};
int main(int argc, char** argv){
    Solution sol1;
    cout << sol1.uniquePaths(3,7)<<"\n";
    cout << sol1.uniquePaths(3,2)<<"\n";
}
