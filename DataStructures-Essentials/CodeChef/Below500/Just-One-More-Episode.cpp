#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x;
        cin >> x;
        if(x<=24)cout<<"NO\n";
        else if(x>24)cout<<"YES\n";
        t--;
    }
}
