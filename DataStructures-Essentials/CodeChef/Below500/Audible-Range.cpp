#include "all.h"
int main(){
    int t;
    cin >> t;
    int x;
    while(t>0){
        cin >> x;
        if(x>=67 && x<=45000){
            cout << "YES\n";
        }else{
            cout << "\n";
        }
        t--;
    }
    return 0;
}
