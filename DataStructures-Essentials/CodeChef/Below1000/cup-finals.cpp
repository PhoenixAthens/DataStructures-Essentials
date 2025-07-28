#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(abs(x-y)<=z)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
