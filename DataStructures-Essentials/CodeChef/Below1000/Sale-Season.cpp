#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x>5000){
            cout << x-500 << "\n";
        }else if(x>1000){
            cout << x-100 << "\n";
        }else if(x>100){
            cout << x-25 << "\n";
        }else{
            cout << x << "\n";
        }
    }
}
