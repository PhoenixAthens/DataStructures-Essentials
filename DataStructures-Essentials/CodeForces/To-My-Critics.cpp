#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    int a,b,c;
    while(t--){
        cin >> a >> b >> c;
        if(a+b>=10 || b+c>=10 || c+a>=10)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
