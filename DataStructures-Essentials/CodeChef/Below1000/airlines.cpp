#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,n;
        cin >> x >> n;
        int calc = n/100 - x;
        if(n%100>0)calc++;
        cout << (calc>0?calc:0) << "\n";
    }
}
