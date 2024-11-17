#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        long prod{1};
        int i = 2;
        while(i<=n){
            prod*=i;
            i++;
        }
        cout << prod << "\n";
        
    }
    return 0;
}
