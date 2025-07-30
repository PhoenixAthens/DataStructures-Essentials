#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(y>x){
            cout << (y-x) << "\n";
        }else{
            int diff = x - y;
            if(diff%2==0){
                cout << (diff/2) << "\n";
            }else{
                cout << (diff/2+2) << "\n";
            }
        }
    }
}
