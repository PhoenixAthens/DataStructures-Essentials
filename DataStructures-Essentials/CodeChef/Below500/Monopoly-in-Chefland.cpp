#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int r1,r2,r3;
        cin >> r1 >> r2 >> r3;
        if(r1>(r2+r3) || r2>(r1+r3) || r3>(r2+r1)){
            cout<<"YES\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
