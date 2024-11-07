#include "all.h"
int main(){
    int x;
    double y;
    cin >> x;
    cin >> y;
    if(x%5==0 && y>=x+0.50){
        y -= x;
        y -= 0.50;
        cout << fixed << setprecision(2) << y << "\n";
    }else{
        cout << fixed << setprecision(2) << y << "\n";
    }
}
