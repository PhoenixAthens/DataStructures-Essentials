#include "all.h"
int main(){
    int t;
    cin >> t;
    int X, Y;
    while(t>0){
        cin >> X >> Y;
        if(X>=Y)cout<<X<<"\n";
        else cout<<Y<<"\n";
        t--;
    }
}
