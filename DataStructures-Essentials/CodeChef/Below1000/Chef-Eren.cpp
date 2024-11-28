#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,n,a,b;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        cout << n/2*a+(n-n/2)*b << "\n";
    }
}
