#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(y<=x)cout<<y<<"\n";
        else cout<<x<<"\n";
    }
}
