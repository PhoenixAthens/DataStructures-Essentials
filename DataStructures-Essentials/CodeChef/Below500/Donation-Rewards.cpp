#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x;
        cin >> x;
        if(x<=3)cout<<"BRONZE\n";
        else if(x>3&&x<=6)cout<<"SILVER\n";
        else cout<<"GOLD\n";
        t--;
    }
}
