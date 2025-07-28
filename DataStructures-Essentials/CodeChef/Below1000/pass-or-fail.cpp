#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,p;
        cin >> n >> x >> p;
        if((x*3 - (n-x)*1) >= p)cout<<"PASS\n";
        else cout<<"FAIL\n";
    }
}
