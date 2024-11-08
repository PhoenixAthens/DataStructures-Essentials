#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int A,B,C;
        cin >> A >> B >> C;
        ((A+B)/2 > C)?cout<<"YES\n":cout<<"NO\n";
    }
}
