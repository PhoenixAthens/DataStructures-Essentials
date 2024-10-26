#include "all.h"
int main(){
    int t,n,x;
    cin >> t;
    while(t>0){
        cin >> n >> x;
        if(n>x)cout<<"NO\n";
        else cout <<"YES\n";
        t--;
    }
}
