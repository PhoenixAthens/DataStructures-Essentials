#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int sum = n%10;
        n/=10;
        cout << sum+n << "\n";
    }
}
