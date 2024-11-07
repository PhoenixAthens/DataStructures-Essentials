#include "all.h"
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n,k;
        cin >> n >> k;
        n+=1;
        if(n<=k)cout<<"YES\n";
        else cout << "NO\n";
        t--;
    }
}
