#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a+c==180 && b+d==180)cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}
