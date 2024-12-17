#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,a,b,c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
//        if(a==b)cout<<c<<"\n";
//        else if(b==c)cout<<a<<"\n";
//        else if(a==c)cout<<b<<"\n";
        cout << (a^b^c) << "\n";
    }
}
