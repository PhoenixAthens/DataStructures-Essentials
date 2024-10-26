#include "all.h"
int main(){
    int t,x,y;
    cin >> t;
    while(t>0){
        cin >> x >> y;
        if(y>x)cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
}
