#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int N,X,K;
        cin >> N >> X >> K;
        if(N*X<=K)cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
}
