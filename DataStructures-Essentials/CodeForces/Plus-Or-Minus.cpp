#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,a,b,c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if((a+b)==c)cout<<"+\n";
        else cout<<"-\n";
    }
}
