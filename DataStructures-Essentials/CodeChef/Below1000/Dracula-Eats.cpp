#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        n-=1;
        int q = n/7;
        if(n%7>0)q++;
        cout << q << "\n";
    }
}
