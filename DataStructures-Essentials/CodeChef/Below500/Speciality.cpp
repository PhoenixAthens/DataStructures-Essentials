#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(x>y){
            if(x>z){
                cout << "Setter\n";
            }else{
                cout << "Editorialist\n";
            }
        }else{
            if(y>z){
                cout << "Tester\n";
            }else{
                cout << "Editorialist\n";
            }
        }
    }
    return 0;
}
