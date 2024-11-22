#include <iostream>
using std::cin;
using std::cout;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cout << ((y-x)%8==0?(y-x)/8:((y-x)/8)+1) << "\n";
    }
}
