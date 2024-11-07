#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int c,x,y;
        cin >> c >> x >> y;
        if(c<=x){
            cout << 0 << "\n";
        }else{
            cout << (c-x)*y << "\n";
        }
    }
    return 0;
}
