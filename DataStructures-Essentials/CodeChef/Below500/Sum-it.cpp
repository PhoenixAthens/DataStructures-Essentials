#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b==c)cout<<"YES\n";
        else cout <<"NO\n";
        t--;
    }
}
