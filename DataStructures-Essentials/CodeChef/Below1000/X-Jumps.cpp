#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        cout << ((x%y==0)?x/y:(x/y)+(x-(x/y))) << "\n";
    }
}
