#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int a,b,c;
        cin >> a >> b >> c;
        if(a>b){
            if(a>c){
                cout << "alice\n";
            }else{
                cout << "charlie\n";
            }
        }else{
            if(b>c){
                cout << "bob\n";
            }else{
                cout << "charlie\n";
            }
        }
        t--;
    }
}
