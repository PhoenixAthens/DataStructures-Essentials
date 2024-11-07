#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int N,X;
        cin >> N >> X;
        if(N%2==0){
            if(X>=N/2)cout<<"YES\n";
            else cout<<"NO\n";
        }else{
            if(X>N/2)cout<<"YES\n";
            else cout<<"NO\n";
        }
        t--;
    }
}
