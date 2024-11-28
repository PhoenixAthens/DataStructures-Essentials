#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    int w,x,y,z;
    while(t--){
        cin >> w >> x >> y >> z;
        if(w == x || w == y || w == z || w== (x+y) || w== (y+z) || w == (z+x) || w == (x+y+z)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}

