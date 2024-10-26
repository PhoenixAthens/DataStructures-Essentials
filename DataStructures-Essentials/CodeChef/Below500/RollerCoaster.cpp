#include "all.h"
int main(){
    int t;
    cin >> t;
    int x,h;
    while(t>0){
        cin >> x >> h;
        if(x>=h)cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
}
