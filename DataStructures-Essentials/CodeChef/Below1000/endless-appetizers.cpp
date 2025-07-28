#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,r;
        cin >> x >> y >> r;
        int q = x+ r/30;
        cout << (q/y + ((q%y!=0)?1:0)) << "\n";
    }
}
