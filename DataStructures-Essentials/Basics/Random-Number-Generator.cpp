#include <iostream>
#include <ctime>
#include <cstdlib>
#include <print>
using std::cout;
int main(){
    int min{99};
    int max{1908};
    srand(time(nullptr));
    cout << RAND_MAX << "\n";
    for(int i=0;i<10;i++){
        cout << rand()%max+min << "\n";
    }
}
// 2 147 483 647
// 1919
// 1899
// 1556
// 1572
// 1287
// 710
// 1837
// 1288
// 702
// 623
