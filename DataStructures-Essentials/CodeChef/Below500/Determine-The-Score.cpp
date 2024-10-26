#include "all.h"
int main(){
    int t;
    cin >> t;
    int x,y;
    while(t>0){
        cin >> x >> y;
        cout << (x/10*y) << "\n";
        t--;
    }
}
