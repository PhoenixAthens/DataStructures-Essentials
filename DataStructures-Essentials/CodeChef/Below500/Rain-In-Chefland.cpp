#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x;
        cin >> x;
        if(x<3)cout<<"LIGHT\n";
        else if(x>=3 and x<7)cout<<"MODERATE\n";
        else cout<<"HEAVY\n";
        t--;
    }
}
