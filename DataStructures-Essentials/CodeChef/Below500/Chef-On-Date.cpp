#include "all.h"
int main(){
    int t,x,y;
    cin >> t;
    while(t>0){
        cin >> x >> y;
        if(x>=y)cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
    return 0;
}
