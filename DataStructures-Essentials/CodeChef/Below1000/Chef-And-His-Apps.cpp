#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    int s,x,y,z;
    while(t--){
        cin >> s >> x >> y >> z;
        int remaining = s - (x+y);
        if(remaining >=z)cout<<0<<"\n";
        else if(remaining+x>=z || remaining+y>=z)cout<<1<<"\n";
        else cout<<2<<"\n";
    }
}
