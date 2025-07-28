#include <iostream>
using std::cout;
using std::min;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int total = a+b+c-min(a,min(b,c));
        cout<<total<<"\n";
    }
}
