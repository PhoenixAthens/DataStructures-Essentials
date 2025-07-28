#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        double a,x,b,y;
        cin >> a >> x >> b >> y;
        if(a/x > b/y){
            cout << "ALICE\n";
        }else if(b/y > a/x){
            cout << "BOB\n";
        }else{
            cout << "EQUAL\n";
        }
    }
}
