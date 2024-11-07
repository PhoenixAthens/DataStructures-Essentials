#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x,y;
        cin>>x>>y;
        if(3*x<=2*y){
            cout << 3*x << "\n";
        }else{
            cout << 2*y << "\n";
        }
        t--;
    }
}
