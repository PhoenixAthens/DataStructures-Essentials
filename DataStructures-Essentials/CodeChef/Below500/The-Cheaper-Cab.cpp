#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x, y;
        cin >> x >> y;
        if(x<y) cout<<"FIRST\n";
        else if(y<x) cout<<"SECOND\n";
        else cout<<"ANY\n";
        t--;
    }
}
