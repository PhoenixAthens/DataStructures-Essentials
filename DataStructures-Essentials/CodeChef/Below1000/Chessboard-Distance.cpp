#include <iostream>
using std::cout;
using std::cin;
using std::max;
int main(){
    int t;
    cin >> t;
    int x1,y1,x2,y2;
    while(t--){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << max(abs(x1-x2),abs(y1-y2)) << "\n";
    }
}
