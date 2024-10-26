#include "all.h"
int main(){
    int t;
    cin >> t;
    int n,x;
    while(t>0){
        cin >> n >> x;
        cout << (n-x) << "\n";
        t--;
    }
}
