#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        int totalSeats = 10*x;
        if(y>totalSeats){
            cout << z*totalSeats << "\n";
        }else{
            cout << y*z << "\n";
        }
    }
    return 0;
}
