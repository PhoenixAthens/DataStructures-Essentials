#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(z>=x+y){
            cout << 2 << "\n";
        }else if(z>=x){
            cout << 1 << "\n";
        }else{
            cout << 0 << "\n";
        }
    }
}
