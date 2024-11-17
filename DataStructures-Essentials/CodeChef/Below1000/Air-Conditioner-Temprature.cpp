#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(b>=a && b>=c)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
