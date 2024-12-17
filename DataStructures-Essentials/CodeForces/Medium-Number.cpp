#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::sort;
int main(){
    vector<int> vec(3);
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<3;i++){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        cout << vec[1] << "\n";
    }
}
