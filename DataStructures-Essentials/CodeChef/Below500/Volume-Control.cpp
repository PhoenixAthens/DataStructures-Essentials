#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x, y;
        cin >> x >> y;
        if(x>=y){
            cout << x-y <<"\n";
        }else{
            cout << y-x << "\n";
        }
        t--;
    }
}
