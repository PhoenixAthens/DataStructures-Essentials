#include "all.h"
int main(){
    int x;
    cin >> x;
    if(x<3)cout<<"GOLD\n";
    else if(x>=3 && x<6)cout<<"SILVER\n";
    else cout << "BRONZE\n";
}
