#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << max(a,b) + max(c,d) << "\n";
    }
    return 0;
}