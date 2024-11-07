#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        double X,Y;
        cin >> X >> Y;
        double finishTime = X*1.07;
        if(Y<=finishTime){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
