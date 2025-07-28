#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        if(b%a==0){
            cout << (b/a - 1) << "\n";
        }else{
            cout << (b/a) << "\n";
        }
    }
}
