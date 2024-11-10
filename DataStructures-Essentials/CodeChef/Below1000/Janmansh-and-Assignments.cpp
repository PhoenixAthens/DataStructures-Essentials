#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(10-x >= 3)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
