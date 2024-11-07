#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int totalMinutes = z*24*60;
        if(x*y<=totalMinutes){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
