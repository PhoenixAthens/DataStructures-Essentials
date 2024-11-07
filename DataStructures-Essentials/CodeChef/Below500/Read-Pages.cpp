#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n,x,y;
        cin >> n >> x >> y;
        if(x*y>=n)cout << "YES\n";
        else cout<<"No\n";
        t--;
    }
}
