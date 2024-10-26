#include "all.h"
int main(){
    int t;
    cin >> t;
    int n,m;
    while(t>0){
        cin >> n >> m;
        if(m>=n)cout<<0<<"\n";
        else cout << (n-m) << "\n";
        t--;
    }
    return 0;
}
