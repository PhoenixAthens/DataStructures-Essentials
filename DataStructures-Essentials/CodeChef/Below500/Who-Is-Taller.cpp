#include "all.h"
int main(){
    int t;
    cin >> t;
    int X,Y;
    while(t>0){
        cin >> X >> Y;
        if(X>Y)cout<<"A\n";
        else cout<<"B\n";
        t--;
    }
}
