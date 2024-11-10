#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        int totalStudents = x*y;
        if(z>totalStudents/2)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
