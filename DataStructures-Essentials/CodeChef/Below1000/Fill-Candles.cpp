#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,m;
        cin >> n >> k >> m;
        cout << ((k*m)%n==0?(k*m)/n:((k*m)/n)+1) << "\n";
    }
}
