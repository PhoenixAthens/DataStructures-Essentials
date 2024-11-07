#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int na,nb,nc;
        cin >> na >> nb >> nc;
        if(na>(nb+nc) || nb>(na+nc) || nc>(na+nb)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
