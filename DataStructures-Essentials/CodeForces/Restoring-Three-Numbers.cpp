#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::sort;
int main(){
    vector<int> v(4);
    for(int i=0;i<4;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int c = v[3]-v[2];
    int a = v[1]-c;
    int b = v[0]-c;
    cout << a << " " << b << " " << c << "\n";
}
