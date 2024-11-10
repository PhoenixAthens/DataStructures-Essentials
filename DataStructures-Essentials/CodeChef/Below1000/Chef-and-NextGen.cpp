#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(x*y>=a*b)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
