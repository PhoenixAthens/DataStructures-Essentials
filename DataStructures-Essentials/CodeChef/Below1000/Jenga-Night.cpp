#include "../Below500/all.h"
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(x>=n && x%n==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
