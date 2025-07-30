#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int xa,xb,xA,xB;
        cin >> xa >> xb >> xA >> xB;
        cout << ((xA/xa)+((xA%xa==0)?0:1) +(xB/xb)+((xB%xb==0)?0:1)) << "\n";
    }
}
