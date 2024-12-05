#include <iostream>
using std::cout;
using std::cin;
using std::min;
int main(){
    int a,b;
    cin >> a >> b;
    if(a==b)cout<<a<<" "<<0<<"\n";
    else if(a>b){
        cout << b << " " << (a-b)/2 << "\n";
    }else{
        cout << a << " " << (b-a)/2 << "\n";
    }
}
