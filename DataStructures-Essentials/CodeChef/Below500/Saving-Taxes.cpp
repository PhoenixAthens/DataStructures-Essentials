#include "all.h"
int main(){
    int t;
    int x,y;
    cin >> t;
    while(t>0){
        cin >> x >> y;
        cout << (x-y) << "\n";
        t--;
    }
    return 0;
}
