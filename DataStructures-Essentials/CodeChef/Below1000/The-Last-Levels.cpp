#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int breaks = (x%3==0)?x/3-1:x/3;
        if(breaks>=0){
            cout << x*y+breaks*z <<"\n";
        }else{
            cout << x*y <<"\n";
        }
        
    }
}
