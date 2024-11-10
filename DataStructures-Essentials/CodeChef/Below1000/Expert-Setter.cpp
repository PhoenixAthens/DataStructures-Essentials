#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(y>=x/2)cout<<"YES\n";
        else cout << "NO\n";
    }
}
