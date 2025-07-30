#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int add = 1;
        while(y<x){
            y+=add;
            add++;
        }
        cout << (add-1) << "\n";
    }
}
