#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n,k;
        cin >> m >> n >> k;
        if(m-(n*k)>0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
