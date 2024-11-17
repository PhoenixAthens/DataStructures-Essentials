#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    int n, m;
    while(t--){
        cin >> n >> m;
        if(m>=n){
            cout << n << "\n";
        }else{
            cout << n + (n-m) << "\n";
        }
    }
}
