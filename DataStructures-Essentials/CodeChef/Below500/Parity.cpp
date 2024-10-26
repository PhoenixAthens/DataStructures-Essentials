#include "all.h"
int main(){
    int t,N;
    cin >> t;
    while(t>0){
        cin >> N;
        if(N%2==0)cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
}
