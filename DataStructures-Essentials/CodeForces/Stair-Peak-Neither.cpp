#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,a,b,c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(b>a){
            if(c>b){
                cout << "STAIR\n";
            }else if(b>c){
                cout << "PEAK\n";
            }else{
                cout<<"NONE\n";
            }
        }else{
            cout << "NONE\n";
        }
    }
}
