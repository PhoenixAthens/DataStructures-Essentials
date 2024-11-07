#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x;
        cin >> x;
        if(x>=1 && x<=4)cout<<"YES\n";
        else cout << "NO\n";
        t--;
    }
}
