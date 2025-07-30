#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        double h,c,e;
        cin >> h >> c >> e;
        if(h>50.0 && c<0.7 && e>5600){
            cout << 10 << "\n";
        }else if(h>50.0 && c<0.7){
            cout << 9 << "\n";
        }else if(c<0.7 && e>5600){
            cout << 8 << "\n";
        }else if(h>50.0 && e>5600){
            cout << 7 << "\n";
        }else if(h>50.0 || c<0.7 || e>5600){
            cout << 6 << "\n";
        }else{
            cout << 5 << "\n";
        }
    }
}
