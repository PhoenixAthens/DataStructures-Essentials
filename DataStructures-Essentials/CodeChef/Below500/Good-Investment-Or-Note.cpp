#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x,y;
        cin >> x >> y;
        if(x>=2*y)cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
}
