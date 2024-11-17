#include <iostream>
using std::cout;
using std::cin;
int main(){
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    if(x==a || x==b || x==c)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
