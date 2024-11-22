#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int timeToStrike = y/x;
        if(timeToStrike<=z){
            cout << z-timeToStrike << "\n";
        }else{
            cout << 0 << "\n";
        }
        
    }
}
