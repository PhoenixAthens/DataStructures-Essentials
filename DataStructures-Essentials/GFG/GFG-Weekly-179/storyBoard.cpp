#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::sort;
int main(){
    vector<int> vec {1,2,5,7,9,6};
    int xorVal = vec[0];
    for(int i=1;i<vec.size();i++){
        xorVal = xorVal xor vec[i];
        cout << xorVal << "\n";
    }
    cout << "\n";
    sort(vec.begin(),vec.end());
    xorVal = vec[0];
    for(int i=1;i<vec.size();i++){
        xorVal = xorVal xor vec[i];
        cout << xorVal << "\n";
    }
}
