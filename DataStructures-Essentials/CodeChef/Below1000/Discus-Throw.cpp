#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        cout << max(a,max(b,c)) << "\n";
    }
}
