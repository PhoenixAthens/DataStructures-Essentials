#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int p,q,r,s;
        cin >> p >> q >> r >> s;
        if(p>(q+r+s)||q>(q+r+s) ||r>(p+q+s)||s>(p+q+r))cout<<"YES\n";
        else cout<<"NO\n";
    }
}
