#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x, y;
        cin >> x >> y;
        int costPrice = x - y;
        int inc = (x*10)/100;
        cout << (x+inc)-costPrice << "\n";
        t--;
    }
}
