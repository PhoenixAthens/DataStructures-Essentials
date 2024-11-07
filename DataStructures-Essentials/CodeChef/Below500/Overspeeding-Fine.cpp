#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x;
        cin >> x;
        if(x<=70){
            cout << 0 << "\n";
        }else if(x>70 and x<=100){
            cout << 500 <<"\n";
        }else{
            cout << 2000 <<"\n";
        }
        t--;
    }
}
