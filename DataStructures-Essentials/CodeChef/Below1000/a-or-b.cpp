#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int red1 = a*2+(a+b)*4;
        int red2 = (a+b)*2+b*4;
        if(red1>red2)cout<<1500-red2 << "\n";
        else cout << 1500-red1 << "\n";
    }
}
