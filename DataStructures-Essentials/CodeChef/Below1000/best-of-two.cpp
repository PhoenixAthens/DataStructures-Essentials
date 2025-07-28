#include <iostream>
using std::cout;
using std::cin;
using std::min;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;
        int alice = a+b+c-min(a,min(b,c));
        int bob = d+e+f-min(d,min(e,f));
        if(alice>bob)cout<<"ALICE\n";
        else if(alice<bob)cout<<"BOB\n";
        else cout<<"TIE\n";
    }
}
