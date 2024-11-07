#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x;
        cin >> x;
        if(4*x<=1000)cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
}
