#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        double x;
        cin >> x;
        int discountOf10P = x*0.1;
        (100>discountOf10P)?cout<<100<<"\n":cout<<discountOf10P<<"\n";
    }
}
