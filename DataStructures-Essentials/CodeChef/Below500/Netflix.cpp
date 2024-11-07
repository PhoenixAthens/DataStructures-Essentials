#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,x;
        cin >> a >> b >> c >> x;
        if((a+b)>=x || (b+c)>=x || (a+c)>=x){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
