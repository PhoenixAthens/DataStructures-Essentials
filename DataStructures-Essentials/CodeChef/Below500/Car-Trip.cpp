#include "all.h"
int main(){
    int t;
    cin>> t;
    while(t>0){
        int x;
        cin >> x;
        if(x<=300)cout<<300*10<<"\n";
        else cout<<x*10<<"\n";
        t--;
    }
}
