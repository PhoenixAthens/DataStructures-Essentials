#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x,y;
        cin >> x >> y;
        if(y>x)cout<<y-x<<"\n";
        else cout << 0 << "\n";
        t--;
    }
}
