#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int w,x,y,z;
        cin >> w >> x >> y >> z;
        cout << w + (x-y)*z << "\n";
    }
    return 0;
}
