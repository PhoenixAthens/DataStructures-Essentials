#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,a,b;
        cin >> x >> a >> b;
        if((a+2*b)>=x)cout<<"Qualify\n";
        else cout<<"NotQualify\n";
    }
    return 0;
}
