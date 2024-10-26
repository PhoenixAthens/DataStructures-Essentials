#include "all.h"
int main(){
    int t,n;
    cin >> t;
    while(t>0){
        cin >> n;
        if(n%3==0)cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
}
