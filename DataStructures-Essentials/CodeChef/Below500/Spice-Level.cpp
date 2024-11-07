#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int x;
        cin >> x;
        if(x<4)cout<<"MILD\n";
        else if(x>=4 and x<7)cout<<"MEDIUM\n";
        else cout<<"HOT\n";
        t--;
    }
}
