#include <iostream>
using std::cout;
using std::cin;
int main(){
    int r,o,c;
    cin >> r >> o >> c;
    cout << (((20-o)*6*6+c > r)?"YES\n":"NO\n");
}
