#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,a,b,c,d;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        int ahead{0};
        if(b>a)ahead++;
        if(c>a)ahead++;
        if(d>a)ahead++;
        cout << ahead << "\n";
    }
}
