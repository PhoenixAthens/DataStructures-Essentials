#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        if(y>=x && y%x==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
