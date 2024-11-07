#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n,m,x;
        cin >> n >> m >> x;
        cout << 2*(n+m)*x<<"\n";
        t--;
    }
}
