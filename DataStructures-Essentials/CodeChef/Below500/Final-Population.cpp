#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x,y,z;
        cin >> x >> y >> z;
        cout <<(x-y+z)<<"\n";
        t--;
    }
}
