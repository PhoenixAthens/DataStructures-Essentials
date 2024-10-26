#include "all.h"
int main(){
    int t,X,Y;
    cin >> t;
    while(t>0){
        cin >> X >> Y;
        cout << (X*10)+(Y*90) << "\n";
        t--;
    }
}
