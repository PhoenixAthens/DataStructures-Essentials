#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        --a/=10;
        ++a;
        --b/=10;
        ++b;
        cout << abs((a)-(b)) << "\n";
    }
}
