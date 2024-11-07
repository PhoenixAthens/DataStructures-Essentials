#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x,y;
        cin >> x >> y;
        if(x<y)cout<<"PROFIT\n";
        else if(y<x)cout <<"LOSS\n";
        else cout << "NEUTRAL\n";
        t--;
    }
}
